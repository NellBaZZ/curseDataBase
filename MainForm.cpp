#include "MainForm.h"
#include "ClientForm.h"
#include "AdminForm.h"
#include "OperatorForm.h"

using namespace System;
using namespace System::Windows::Forms;

const std::string server = "localhost:5555";
const std::string username = "root";
const std::string password = "ebezap87@";

void main()
{
    system("chcp 65001");
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	curseFormSQL::MainForm form;
	Application::Run(% form);
}

 client_data dataClient;
 worker_data workerData;
    
 // Глобальные переменные для обработки клика на ячейку таблицы и передачи их значения для работы
 // клиент
 std::string TableClickCode = "";
 std::string TableClickFio = "";
 std::string TableClickAddress = "";

 // подписка
 std::string TableClickNumberSub = "";
 int TableClickMonthSub = 0;
 int TableClickYearSub = 0;
 int TableClickTimeSub = 0;

 // издание
 std::string TableClickIndexBook = "";
 std::string TableClickTypeBook = "";
 std::string TableClickNameBook = "";
 std::string TableClickPriceBook = "";

 // тип издания
 std::string TableClickTypeBookIndex = "";
 std::string TableClickTypeBookName = "";

 // сотрудник
 std::string TableClickLogin = "";
 std::string TableClickPassword = "";
 std::string TableClickPost = "";

 // Глобальные переменные для проверки входных данных
 std::string title = "";
 std::string digit = "";
 std::string rus = "";
 std::string eng = "";
 std::string any_symbol = "";
 std::string space = "";
 std::string worker = "";

 sql::Driver* driver;
 sql::Connection* con;
 sql::Statement* stmt;
 sql::ResultSet* res;
 sql::PreparedStatement* pstmt;

 Client classClientForMainform;
 Worker classWorkerFormainform;

 // ФУНКЦИЯ ДЛЯ ВХОДА В ПРОФИЛЬ КЛИЕНТА
 System::Void curseFormSQL::MainForm::loginClient()
 {
     std::string codeClient;
     Convert_String_to_string(textBoxClient1->Text->ToString(), codeClient);
     std::string fio = converterFromStringFormToUtf8(textBoxClient2->Text->ToString());
     dataClient.FIO = "";
     if (checkId(codeClient) && classClientForMainform.checkFIO(fio)) {
         try {
             connectToSql();
             try
             {
                 res = stmt->executeQuery("SELECT * FROM client where id = " + codeClient + " AND FIO = '" + fio + "'");
                 while (res->next()) {
                     dataClient.id = res->getInt(1);
                     dataClient.FIO = res->getString("FIO");
                     dataClient.address = res->getString("address");
                     ClientForm^ form = gcnew ClientForm(); // Создание формы
                     form->Show();
                     this->Hide();
                 }
                 delete res;
                 delete stmt;
                 delete con;
             }
             catch (sql::SQLException e)
             {
                 MessageBox::Show("Не удалось войти в учетную запись клиента! (проверьте входные данные)", "Ошибка!");
             }
         }
         catch (sql::SQLException e) {
             MessageBox::Show("Ошибка подключения к базе данных!", "Ошибка!");
         }
     }
     if (dataClient.FIO == "") {
         MessageBox::Show("Неправильный логин или пароль!", "Ошибка!");
     }
 }

 // ФУНКЦИЯ ДЛЯ ВХОДА В ПРОФИЛЬ СОТРУДНИКА
 System::Void curseFormSQL::MainForm::loginWorker()
 {
     std::string login = converterFromStringFormToUtf8(textBoxClient2->Text->ToString());
     std::string password = converterFromStringFormToUtf8(textBoxClient1->Text->ToString());
     workerData.login = "";
     if (classWorkerFormainform.checkWorker(login) && classWorkerFormainform.checkWorker(password)) {
         std::string sqll = "SELECT * FROM worker where login = '" + login + "' AND pass = '" + password + "'";
         try {
             connectToSql();
             try
             {
                 res = stmt->executeQuery(sqll);
                 while (res->next()) {
                     workerData.login = res->getString("login");
                     workerData.password = res->getString("pass");
                     workerData.post = res->getString("post");
                     if (workerData.post == "Администратор")
                     {
                         AdminForm^ form = gcnew AdminForm();
                         form->Show();
                         this->Hide();
                     }
                     else if (workerData.post == "Оператор") {
                         OperatorForm^ form = gcnew OperatorForm();
                         form->Show();
                         this->Hide();
                     }
                 }
                 delete res;
                 delete stmt;
                 delete con;
             }
             catch (sql::SQLException e)
             {
                 MessageBox::Show("Не удалось войти в учетную запись сотрудника! (проверьте входные данные)", "Ошибка!");
             }
         }
         catch (sql::SQLException e) {
             MessageBox::Show("Ошибка подключения к базе данных!", "Ошибка!");
         }
         if (workerData.login == "")
         {
             MessageBox::Show("Неправильный логин или пароль!", "Ошибка!");
         }
     }
 }

//Кнопка входа в учетную запись
System::Void curseFormSQL::MainForm::buttonClient_Click(System::Object^ sender, System::EventArgs^ e)
{

    // объявление всех наборов алфавит для проверки на корректность ввода
    String^ titler = "ЙЦУКЕНГШЩЗХЪФЫВАПРОЛДЖЭЯЧСМИТЬБЮйцукенгшщзхъфывапролджэячсмитьбюQWERTYUIOPASDFGHJKLZXCVBNMqwertyuiopasdfghjklzxcvbnm";
    String^ number = "0123456789";
    String^ russian = "ЙЦУКЕНГШЩЗХЪФЫВАПРОЛДЖЭЯЧСМИТЬБЮйцукенгшщзхъфывапролджэячсмитьбю";
    String^ spacer = "     ";
    String^ english = "QWERTYUIOPASDFGHJKLZXCVBNMqwertyuiopasdfghjklzxcvbnm";
    String^ symbols = "1234567890/.,':^<>ЙЦУКЕНГШЩЗХЪФЫВАПРОЛДЖЭЯЧСМИТЬБЮйцукенгшщзхъфывапролджэячсмитьбю ";
    String^ work = "QWERTYUIOPASDFGHJKLZXCVBNMqwertyuiopasdfghjklzxcvbnm1234567890";
    title = converterFromStringFormToUtf8(titler);
    digit = converterFromStringFormToUtf8(number);
    rus = converterFromStringFormToUtf8(russian);
    space = converterFromStringFormToUtf8(spacer);
    eng = converterFromStringFormToUtf8(english);
    any_symbol = converterFromStringFormToUtf8(symbols);
    worker = converterFromStringFormToUtf8(work);
    if (checkBoxState->CheckState.ToString() == "Unchecked")
    {
        loginClient();
    }
    else if (checkBoxState->CheckState.ToString() == "Checked") {
        loginWorker();
    }
}


// Кнопка выхода
System::Void curseFormSQL::MainForm::qweToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    Application::Exit();
}


