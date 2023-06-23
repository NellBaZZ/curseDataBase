#pragma once
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <wchar.h>
#include <windows.h>
#include <fileapi.h>
#include <stringapiset.h>
#include <vector>
#include <algorithm>

#include "mysql_connection.h"
#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/prepared_statement.h>


using namespace System;
using namespace System::Windows::Forms;

extern const std::string server;
extern const std::string username;
extern const std::string password;

extern sql::Driver* driver;
extern sql::Connection* con;
extern sql::Statement* stmt;
extern sql::ResultSet* res;
extern sql::PreparedStatement* pstmt;


inline void connectToSql()
{
	driver = get_driver_instance();
	con = driver->connect(server, username, password);
	con->setSchema("cursed");
	stmt = con->createStatement();
}


/*  функции конвертирования */

//конвертируем System::string^ в std::string
inline std::string& Convert_String_to_string(String^ s, std::string& os)
{
	using namespace Runtime::InteropServices;
	const char* chars =
		(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
	os = chars;
	Marshal::FreeHGlobal(IntPtr((void*)chars));

	return os;
}

//конвертируем std::string в System::string^'
inline String^ Convert_string_to_String(std::string& os, String^ s)
{
	s = gcnew System::String(os.c_str());
	return s;
}

//конвертируем System::string^ в std::string
inline std::string& Convert_String_to_string(String^ s)
{
	std::string os;
	using namespace Runtime::InteropServices;
	const char* chars =
		(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
	os = chars;
	Marshal::FreeHGlobal(IntPtr((void*)chars));
	return os;
}

//конвертируем std::string в System::string^
inline String^ Convert_string_to_String(std::string& os)
{
	System::String^ s = gcnew System::String(os.c_str());
	return s;
}

// конвертируем System::string^ в char*
inline char* Convert_String_to_char(System::String^ string)
{
	using namespace System::Runtime::InteropServices;
	return (char*)(void*)Marshal::StringToHGlobalAnsi(string);
}

// Convert an ANSI string to a wide Unicode String
inline std::wstring ansi2unicode(const std::string& str)
{
	int size_needed = MultiByteToWideChar(CP_ACP, 0, &str[0], (int)str.size(), NULL, 0);
	std::wstring wstrTo(size_needed, 0);
	MultiByteToWideChar(CP_ACP, 0, &str[0], (int)str.size(), &wstrTo[0], size_needed);
	return wstrTo;
}

// Convert a wide Unicode string to an UTF8 string
inline std::string utf8_encode(const std::wstring& wstr)
{
	int size_needed = WideCharToMultiByte(CP_UTF8, 0, &wstr[0], (int)wstr.size(), NULL, 0, NULL, NULL);
	std::string strTo(size_needed, 0);
	WideCharToMultiByte(CP_UTF8, 0, &wstr[0], (int)wstr.size(), &strTo[0], size_needed, NULL, NULL);
	return strTo;
}

// конвертация из String^ в стринг кодировки utf8
inline std::string converterFromStringFormToUtf8(String^ s)
{
	std::string os;
	Convert_String_to_string(s, os);
	std::wstring wstr = ansi2unicode(os);
	std::string str = utf8_encode(wstr);
	return str;
}

// конвертация кодировки utf8 на cp1251
inline std::string Utf8_to_cp1251(const char* str)
{
	std::string res;
	int result_u, result_c;

	result_u = MultiByteToWideChar(CP_UTF8,
		0,
		str,
		-1,
		0,
		0);

	if (!result_u)
		return 0;

	wchar_t* ures = new wchar_t[result_u];

	if (!MultiByteToWideChar(CP_UTF8,
		0,
		str,
		-1,
		ures,
		result_u))
	{
		delete[] ures;
		return 0;
	}

	result_c = WideCharToMultiByte(
		1251,
		0,
		ures,
		-1,
		0,
		0,
		0, 0);

	if (!result_c)
	{
		delete[] ures;
		return 0;
	}

	char* cres = new char[result_c];

	if (!WideCharToMultiByte(
		1251,
		0,
		ures,
		-1,
		cres,
		result_c,
		0, 0))
	{
		delete[] cres;
		return 0;
	}
	delete[] ures;
	res.append(cres);
	delete[] cres;
	return res;
}

// конвертация из strUtf8 to strCp1251 to STR^
inline String^ converterFromstrToSTR(std::string s)
{
	const char* chare = s.c_str();
	std::string str = Utf8_to_cp1251(chare);
	String^ STR = Convert_string_to_String(str);
	return STR;
}
