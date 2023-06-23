#pragma once
#include "Functions.h"

struct client_data
{
    int id;
    std::string FIO, address;
};

struct typeBook_data
{
    int id;
    std::string tip;
};

struct book_data
{
    std::string name, nameTypeBook;
    int index, id_type, price;
};

struct sub_data
{
    int id, id_client, id_publication;
    int start_month, start_year, time_sub;
    std::string FIO, name;
};

struct worker_data
{
	std::string login, password, post;
};

struct GenerateReport
{
    std::string name, fio, address;
    int srok, month, price, sumForSub, sumForBook, sumForAll;
};

extern client_data dataClient;
extern worker_data workerData;
extern int minimumOneSubClient; // глобальная переменная для передачи id клиента для проверок

extern std::string TableClickCode;
extern std::string TableClickFio;
extern std::string TableClickAddress;

extern std::string TableClickNumberSub;
extern int TableClickMonthSub;
extern int TableClickYearSub;
extern int TableClickTimeSub;

extern std::string TableClickIndexBook;
extern std::string TableClickTypeBook;
extern std::string TableClickNameBook;
extern std::string TableClickPriceBook;

extern std::string TableClickTypeBookIndex;
extern std::string TableClickTypeBookName;

extern std::string TableClickLogin;
extern std::string TableClickPassword;
extern std::string TableClickPost;

extern std::string title;
extern std::string digit;
extern std::string rus;
extern std::string eng;
extern std::string any_symbol;
extern std::string space;
extern std::string worker;

// запрос количества записей
inline int counterData(std::string countSql)
{
    try {
        connectToSql();
        try
        {
            int i;
            res = stmt->executeQuery(countSql);
            while (res->next()) {
                i = res->getInt(1);
            }
            delete res;
            delete stmt;
            return i;
        }
        catch (sql::SQLException e)
        {
            return 0;
            MessageBox::Show("Не удалось подсчитать количество записей! (проверьте входные данные)", "Ошибка!");
        }
    }
    catch (sql::SQLException e) {
        return 0;
        MessageBox::Show("Ошибка подключения к базе данных!", "Ошибка!");
    }
}

// ПРОВЕРКА ИНДЕКСА НА КОРРЕКТНОСТЬ ВВОДА
inline bool checkId(std::string id) {
    if (id.size() > 0) {
        //MessageBox::Show("размер = " + id.size(), "Ошибка!");
        if (id.size() > 5) { MessageBox::Show("Много символов!", "Ошибка!"); return false; }
        for (int i = 0; i < id.size(); i++)
        {
            if (!count(digit.begin(), digit.end(), id[i])) {
                MessageBox::Show("Неправильный ввод данных! (символы)", "Ошибка!");
                return false;
            }
        }
        return true;
    }
    else { MessageBox::Show("Нет символов!", "Ошибка!"); return false; }
}

// ПРОВЕРКА НАЗВАНИЯ НА КОРРЕКТНОСТЬ ВВОДА
inline bool checkName(std::string name)
{
    if (name.size() > 0) {
        if (name.size() > 200) {
            MessageBox::Show("Много символов!", "Ошибка!");
            return false;
        }
        int count_space = 0;
        //MessageBox::Show("размер = " + name.size(), "Ошибка!");
        for (int i = 0; i < name.size(); i += 2) {
            if (!count(space.begin(), space.end(), name[i])) {
                if (!count(title.begin(), title.end(), name[i])) {
                    MessageBox::Show("Неправильный ввод данных! (символы)", "Ошибка!");
                    return false;
                }
                // MessageBox::Show("здесь маленькая = " + i, "Ошибка!");
            }
            else {
                if (!count(title.begin(), title.end(), name[i + 1]))
                {
                    MessageBox::Show("Нет буквы после пробела!", "Ошибка!");
                    return false;
                }
                //   MessageBox::Show("здесь пробел был = " + i, "Ошибка!");
                i += 1;
                count_space++;
            }
        }
        if (count_space < 5) {
            //MessageBox::Show("победная", "успех!");
            return true;
        }
        else {
            MessageBox::Show("Много пробелов! (max = 4)", "Ошибка!");
            return false;
        }
    }
    else {
        MessageBox::Show("Нет символов!", "Ошибка!");
        return false;
    }
}
// КЛАСС КЛИЕНТОВ
class Client
{
    public:
        // ПРОВЕРКА ФИО НА КОРРЕКТНОСТЬ ВВОДА
        inline bool checkFIO(std::string fio)
        {
            if (fio.size() > 0){
                if (fio.size() > 250){
                    MessageBox::Show("Много символов!", "Ошибка!");
                    return false;
                }
                int count_space = 0;
               // MessageBox::Show("размер = " + fio.size(), "Ошибка!");
                for (int i = 0; i < fio.size(); i+=2){
                    if (!count(space.begin(), space.end(), fio[i])){
                        if (!count(rus.begin(), rus.end(), fio[i])){
                            MessageBox::Show("Неправильный ввод данных! (rus символы)", "Ошибка!");
                            return false;
                        }
                       // MessageBox::Show("здесь маленькая = " + i, "Ошибка!");
                    }
                    else{
                        if (!count(rus.begin(), rus.end(), fio[i+1]))
                        {
                            MessageBox::Show("Нет буквы после пробела!", "Ошибка!");
                            return false;
                        }
                     //   MessageBox::Show("здесь пробел был = " + i, "Ошибка!");
                        i+=1;
                        count_space++;
                    }
                }
                if (count_space > 0 && count_space < 4){
                    //MessageBox::Show("победная", "победа!");
                    return true;
                }
                else {
                    MessageBox::Show("Мало, либо много пробелов! (Min 1, Max 3)", "Ошибка!");
                    return false;
                }
            }
            else { 
                MessageBox::Show("Нет символов!", "Ошибка!");
                return false; }
        }

        // ПРОВЕРКА АДРЕСА НА КОРРЕКТНОСТЬ ВВОДА
        inline bool checkAddress(std::string address)
        {
            if (address.size() > 4) {
                //MessageBox::Show("размер = " + address.size(), "Ошибка!");
                if (address.size() > 250) { MessageBox::Show("Много символов!", "Ошибка!"); return false; }
                for (int i = 0; i < address.size(); i++)
                {
                    if (!count(any_symbol.begin(), any_symbol.end(),address[i])) {
                        MessageBox::Show("Неправильный ввод данных! (символы)", "Ошибка!");
                        return false;
                    }
                }
                return true;
            }
            else { MessageBox::Show("Мало символов!", "Ошибка!"); return false; }
        }
       
        // ДОБАВЛЕНИЕ В КЛИЕНТА
        inline void Add(std::string id, std::string FIO, std::string address)
        {
            int count = counterData("select count(*) from client where id = " + id);
            if (count == 0) {
                if (checkId(id) && checkFIO(FIO) && checkAddress(address))
                {
                    int code = stoi(id);
                    try {
                        connectToSql();
                        try
                        {
                            pstmt = con->prepareStatement("INSERT INTO client(id, FIO, address) VALUES (?, ?, ?)");
                            pstmt->setInt(1, code);
                            pstmt->setString(2, FIO);
                            pstmt->setString(3, address);
                            pstmt->execute();
                            MessageBox::Show("Клиент добавлен!", "Успех!");
                            delete con;
                            delete pstmt;
                        }
                        catch (sql::SQLException e)
                        {
                            MessageBox::Show("Не удалось добавить клиента(проверьте входные данные)!", "Ошибка!");
                        }
                    }
                    catch (sql::SQLException e) {
                        MessageBox::Show("Ошибка подключения к базе данных!", "Ошибка!");
                    }
                }
            } else { MessageBox::Show("Такая запись уже есть!", "Ошибка!"); }
        }

        // УДАЛЕНИЕ КЛИЕНТА
        inline void Delete(std::string id)
        {
            int count = counterData("select count(*) from client where id = " + id);
            if (count != 0) {
                if (checkId(id)) {
                    int code = stoi(id);
                    try {
                        connectToSql();
                        try
                        {
                            stmt->execute("DELETE FROM client WHERE id = " + id);
                            MessageBox::Show("Клиент удален!", "Успех!");
                            delete con;
                            delete stmt;
                        }
                        catch (sql::SQLException e)
                        {
                            MessageBox::Show("Не удалось удалить клиента! (проверьте входные данные)", "Ошибка!");
                        }
                    }
                    catch (sql::SQLException e) {
                        MessageBox::Show("Ошибка подключения к базе данных!", "Ошибка!");
                    }
                }
            } else { MessageBox::Show("Такой записи нет!", "Ошибка!"); }
        }

        // ИЗМЕНЕНИЕ КЛИЕНТА
        inline void redact(std::string idRedact,std::string id, std::string FIO, std::string address)
        {
            if (checkId(id) && checkId(idRedact) && checkFIO(FIO) && checkAddress(address)) {
                int codeRedact = stoi(idRedact);
                int code = stoi(id);
                try {
                    connectToSql();
                    try
                    {
                        stmt->execute("UPDATE client SET id = " + id + ", FIO = '" + FIO + "', address = '" + address + "' WHERE id = " + idRedact);
                        MessageBox::Show("Клиент изменен!", "Успех!");
                        delete con;
                        delete stmt;
                    }
                    catch (sql::SQLException e)
                    {
                        MessageBox::Show("Такой индекс уже есть!", "Ошибка!");
                    }
                }
                catch (sql::SQLException e) {
                    MessageBox::Show("Ошибка подключения к базе данных!", "Ошибка!");
                }
            }
        }

        // ПОИСК КЛИЕНТА
        inline void search(std::string query, client_data*& data)
        {
            try {
                connectToSql();
                try
                {
                    res = stmt->executeQuery(query);
                    int i = 0;
                    while (res->next()) {
                        data[i].id = res->getInt(1);
                        data[i].FIO = res->getString("FIO");
                        data[i].address = res->getString("address");
                        i++;
                    }
                    delete res;
                    delete stmt;
                    delete con;
                }
                catch (sql::SQLException e)
                {
                    MessageBox::Show("Не удалось найти клиента! (проверьте входные данные)", "Ошибка!");
                }
            }
            catch (sql::SQLException e) {
                MessageBox::Show("Ошибка подключения к базе данных!", "Ошибка!");
            }
        }
};

// КЛАСС ИЗДАНИЙ
class Book
{
    public:
        // ДОБАВИТЬ ИЗДАНИЕ
        inline void Add(std::string index, std::string id_type, std::string name, std::string price)
        {
            int count1 = counterData("select count(*) from publication where id = " + index);
            int count2 = counterData("select count(*) from publication where name = '" + name + "'");
            int count3 = counterData("select count(*) from type_publication where id = " + id_type);
            if (count3 != 0) {
                if (count1 == 0 && count2 == 0) {
                    if (checkId(index) && checkId(id_type) && checkId(price) && checkName(name)) {
                        int ind = stoi(index);
                        int idtype = stoi(id_type);
                        int cost = stoi(price);
                        try {
                            connectToSql();
                            try
                            {
                                pstmt = con->prepareStatement("INSERT INTO publication(id, id_type, name, price) VALUES (?, ?, ?, ?)");
                                pstmt->setInt(1, ind);
                                pstmt->setInt(2, idtype);
                                pstmt->setString(3, name);
                                pstmt->setInt(4, cost);
                                pstmt->execute();
                                MessageBox::Show("Издание добавлено!", "Успех!");
                                delete con;
                                delete pstmt;
                            }
                            catch (sql::SQLException e)
                            {
                                MessageBox::Show("Не удалось добавить издание! (проверьте входные данные)", "Ошибка!");
                            }
                        }
                        catch (sql::SQLException e) {
                            MessageBox::Show("Ошибка подключения к базе данных!", "Ошибка!");
                        }
                    }
                }
                else { MessageBox::Show("Такая запись уже есть!", "Ошибка!"); }
            } else{ MessageBox::Show("Такого типа издания нет!", "Ошибка!"); }
        }

        // УДАЛИТЬ ИЗДАНИЕ
        inline void Delete(std::string index)
        {
            int count = counterData("select count(*) from publication where id = " + index);
            if (count != 0) {
                if (checkId(index)) {
                    int ind = stoi(index);
                    try {
                        connectToSql();
                        try
                        {
                            stmt->execute("DELETE FROM publication WHERE id = " + index);
                            MessageBox::Show("Издание удалено!", "Успех!");
                            delete con;
                            delete stmt;
                        }
                        catch (sql::SQLException e)
                        {
                            MessageBox::Show("Не удалось удалить издание! (проверьте входные данные)", "Ошибка!");
                        }
                    }
                    catch (sql::SQLException e) {
                        MessageBox::Show("Ошибка подключения к базе данных!", "Ошибка!");
                    }
                }
            } else { MessageBox::Show("Такой записи нет!", "Ошибка!"); }
        }

        // ИЗМЕНИТЬ ИЗДАНИЕ
        inline void redact(std::string redactIndex, std::string index, std::string id_type, std::string name, std::string price)
        {
           // int count1 = counterData("select count(*) from publication where id = " + index);
           // int count2 = counterData("select count(*) from publication where name = '" + name + "'");
            int count3 = counterData("select count(*) from type_publication where id = " + id_type);
            if (count3 != 0) {
               
                if (checkId(redactIndex) && checkId(index) && checkId(id_type) && checkId(price) && checkName(name)) {
                    try {
                        connectToSql();
                        try
                        {
                            stmt->execute("UPDATE publication SET id = " + index + ", id_type = " + id_type + ", name = '" + name + "', price = " + price + " WHERE id = " + redactIndex);
                            MessageBox::Show("Издание изменено!", "Успех!");
                            delete con;
                            delete stmt;
                        }
                        catch (sql::SQLException e)
                        {
                            MessageBox::Show("Такой индекс, либо название уже есть!", "Ошибка!");
                        }
                    }
                    catch (sql::SQLException e) {
                        MessageBox::Show("Ошибка подключения к базе данных!", "Ошибка!");
                    }
                }
            }
            else { MessageBox::Show("Такого типа издания нет!", "Ошибка!"); }
        }

        // ПОИСК ИЗДАНИЯ ДЛЯ СОТРУДНИКОВ
        inline void search(std::string query, book_data*& data)
        {
            try {
                connectToSql();
                try
                {
                    res = stmt->executeQuery(query);
                    int i = 0;
                    while (res->next()) {
                        data[i].index = res->getInt(1);
                        data[i].id_type = res->getInt(2);
                        data[i].nameTypeBook = res->getString("tip");
                        data[i].name = res->getString("name");
                        data[i].price = res->getInt(5);
                        i++;
                    }
                    delete res;
                    delete stmt;
                    delete con;
                }
                catch (sql::SQLException e)
                {
                    MessageBox::Show("Не удалось найти издание! (проверьте входные данные)", "Ошибка!");
                }
            }
            catch (sql::SQLException e) {
                MessageBox::Show("Ошибка подключения к базе данных!", "Ошибка!");
            }
        }

        // ПОИСК ИЗДАНИЯ ДЛЯ КЛИЕНТА
        inline void searchForClientForm(std::string query, book_data*& data)
        {
            try {
                connectToSql();
                try
                {
                    res = stmt->executeQuery(query);
                    int i = 0;
                    while (res->next()) {
                        data[i].name = res->getString("name");
                        data[i].nameTypeBook = res->getString("tip");
                        data[i].price = res->getInt(3);
                        i++;
                    }
                    delete res;
                    delete stmt;
                    delete con;
                }
                catch (sql::SQLException e)
                {
                    MessageBox::Show("Не удалось найти издание! (проверьте входные данные)", "Ошибка!");
                }
            }
            catch (sql::SQLException e) {
                MessageBox::Show("Ошибка подключения к базе данных!", "Ошибка!");
            }
        }
};

// КЛАСС ТИПА ИЗДАНИЯ
class typeBook
{
    public:
        // ДОБАВЛЕНИЕ ТИПА ИЗДАНИЯ
        inline void Add(std::string tip)
        {
            int count = counterData("select count(*) from type_publication where tip = '" + tip + "'");
            if (count == 0) {
                if (checkName(tip)) {
                    try {
                        connectToSql();
                        try
                        {
                            pstmt = con->prepareStatement("INSERT INTO type_publication(tip) VALUES (?)");
                            pstmt->setString(1, tip);
                            pstmt->execute();
                            MessageBox::Show("Тип издания добавлен!", "Успех!");
                            delete con;
                            delete pstmt;
                        }
                        catch (sql::SQLException e)
                        {
                            MessageBox::Show("Не удалось добавить тип изданий! (проверьте входные данные)", "Ошибка!");
                        }
                    }
                    catch (sql::SQLException e) {
                        MessageBox::Show("Ошибка подключения к базе данных!", "Ошибка!");
                    }
                }
            }
            else { MessageBox::Show("Такая запись уже есть!", "Ошибка!"); }
        }

        // УДАЛЕНИЕ ТИПА ИЗДАНИЯ
        inline void Delete(std::string id)
        {
            int count = counterData("select count(*) from type_publication where id = " + id);
            if (count != 0) {
                if (checkId(id)) {
                    try {
                        connectToSql();
                        try
                        {
                            stmt->execute("DELETE FROM type_publication WHERE id = " + id);
                            MessageBox::Show("Тип издания удален!", "Успех!");
                            delete con;
                            delete stmt;
                        }
                        catch (sql::SQLException e)
                        {
                            MessageBox::Show("Не удалось удалить тип издания! (проверьте входные данные)", "Ошибка!");
                        }
                    }
                    catch (sql::SQLException e) {
                        MessageBox::Show("Ошибка подключения к базе данных!", "Ошибка!");
                    }
                }
            }
            else { MessageBox::Show("Такой записи нет!", "Ошибка!"); }
        }

        // ИЗМЕНЕНИЕ ТИПА ИЗДАНИЯ
        inline void redact(std::string id, std::string tip)
        {
            int count = counterData("select count(*) from type_publication where id = " + id);
            if (count != 0) {
                if (checkId(id) && checkName(tip)) {
                    try {
                        connectToSql();
                        try
                        {
                            stmt->execute("UPDATE type_publication SET tip = '" + tip + "' WHERE id = " + id);
                            MessageBox::Show("Тип издания изменен!", "Успех!");
                            delete con;
                            delete stmt;
                        }
                        catch (sql::SQLException e)
                        {
                            MessageBox::Show("Не удалось изменить тип издания! (проверьте входные данные)", "Ошибка!");
                        }
                    }
                    catch (sql::SQLException e) {
                        MessageBox::Show("Ошибка подключения к базе данных!", "Ошибка!");
                    }
                }
            }
            else{ MessageBox::Show("Такой записи нет!", "Ошибка!"); }
        }

        //  ПОИСК ТИПА ИЗДАНИЯ
        inline void search(std::string query, typeBook_data*& data)
        {
            try {
                connectToSql();
                try
                {
                    res = stmt->executeQuery(query);
                    int i = 0;
                    while (res->next()) {
                        data[i].id = res->getInt(1);
                        data[i].tip = res->getString("tip");
                        i++;
                    }
                    delete res;
                    delete stmt;
                    delete con;
                }
                catch (sql::SQLException e)
                {
                    MessageBox::Show("Не удалось найти тип издания! (проверьте входные данные)", "Ошибка!");
                }
            }
            catch (sql::SQLException e) {
                MessageBox::Show("Ошибка подключения к базе данных!", "Ошибка!");
            }
        }
};

// класс подписок
class subscribe
{
public:
    // ДОБАВИТЬ ПОДПИСКУ
    inline void Add(std::string code, std::string index, int month, int year, int srok)
    {
        if (checkId(code) && checkId(index)) {
            int ind = stoi(index);
            int cod = stoi(code);
            int firstSub = counterData("SELECT COUNT(*) FROM subscription WHERE id_publication = " + index + " and id_client = " + code);
            if (firstSub == 0) {
                try {
                    connectToSql();
                    try
                    {
                        pstmt = con->prepareStatement("INSERT INTO subscription(id_publication, id_client, start_month, start_year, time_sub) VALUES (?, ?, ?, ?, ?)");
                        pstmt->setInt(1, ind);
                        pstmt->setInt(2, cod);
                        pstmt->setInt(3, month);
                        pstmt->setInt(4, year);
                        pstmt->setInt(5, srok);
                        pstmt->execute();
                        MessageBox::Show("Подписка добавлена!", "Успех!");
                        delete con;
                        delete pstmt;
                    }
                    catch (sql::SQLException e)
                    {
                        MessageBox::Show("Не удалось добавить подписку! (проверьте входные данные)", "Ошибка!");
                    }
                }
                catch (sql::SQLException e) {
                    MessageBox::Show("Ошибка подключения к базе данных!", "Ошибка!");
                }
            }
            else { MessageBox::Show("Данная подписка уже оформлена у клиента!", "Ошибка!"); }
        }
    }

    // УДАЛЕНИЕ ПОДПИСКИ
    inline void Delete(std::string number_sub)
    {
        int count = counterData("select count(*) from subscription where id = " + number_sub);
        if (count != 0) {
            if (checkId(number_sub)) {
                try {
                    connectToSql();
                    try
                    {
                        stmt->execute("DELETE FROM subscription WHERE id = " + number_sub);
                        MessageBox::Show("Подписка удалена!", "Успех!");
                        delete con;
                        delete stmt;
                    }
                    catch (sql::SQLException e)
                    {
                        MessageBox::Show("Не удалось удалить подписку! (проверьте входные данные)", "Ошибка!");
                    }
                }
                catch (sql::SQLException e) {
                    MessageBox::Show("Ошибка подключения к базе данных!", "Ошибка!");
                }
            }
        } else { MessageBox::Show("Такой записи нет!", "Ошибка!"); }
    }

    // ИЗМЕНЕНИЕ ПОДПИСКИ
    inline void redact(std::string id, int month, int year, int srok)
    {
        int count = counterData("select count(*) from subscription where id = " + id);
        if (count != 0) {
            if (checkId(id)) {
                try {
                    connectToSql();
                    try
                    {
                        stmt->execute("UPDATE subscription SET start_month = " + std::to_string(month) + ", start_year = " + std::to_string(year) + ", time_sub = " + std::to_string(srok) + " WHERE id = " + id);
                        MessageBox::Show("Подписка изменена!", "Успех!");
                        delete con;
                        delete stmt;
                    }
                    catch (sql::SQLException e)
                    {
                        MessageBox::Show("Не удалось изменить подписку! (проверьте входные данные)", "Ошибка!");
                    }
                }
                catch (sql::SQLException e) {
                    MessageBox::Show("Ошибка подключения к базе данных!", "Ошибка!");
                }
            }
        } else { MessageBox::Show("Такой записи нет!", "Ошибка!"); }
    }

    // ПОИСК ПОДПИСКИ ДЛЯ СОТРУДНИКА
    inline void search(std::string query, sub_data*& data)
    {
        try {
            connectToSql();
            try
            {
                res = stmt->executeQuery(query);
                int i = 0;
                while (res->next()) {
                    data[i].id = res->getInt(1);
                    data[i].id_publication = res->getInt(2);
                    data[i].name = res->getString("name");
                    data[i].id_client = res->getInt(4);
                    data[i].FIO = res->getString("FIO");
                    data[i].start_month = res->getInt(6);
                    data[i].start_year = res->getInt(7);
                    data[i].time_sub = res->getInt(8);
                    i++;
                }
                delete res;
                delete stmt;
                delete con;
            }
            catch (sql::SQLException e)
            {
                MessageBox::Show("Не удалось найти подпису! (проверьте входные данные)", "Ошибка!");
            }
        }
        catch (sql::SQLException e) {
            MessageBox::Show("Ошибка подключения к базе данных!", "Ошибка!");
        }
    }

    // ПОИСК ПОДПИСКИ ДЛЯ КЛИЕНТА
    inline void searchForClientForm(std::string query, sub_data*& data)
    {
        try {
            connectToSql();
            try
            {
                res = stmt->executeQuery(query);
                int i = 0;
                while (res->next()) {
                    data[i].name = res->getString("name");
                    data[i].start_month = res->getInt(2);
                    data[i].start_year = res->getInt(3);
                    data[i].time_sub = res->getInt(4);
                    i++;
                }
                delete res;
                delete stmt;
                delete con;
            }
            catch (sql::SQLException e)
            {
                MessageBox::Show("Не удалось найти подписку! (проверьте входные данные)", "Ошибка!");
            }
        }
        catch (sql::SQLException e) {
            MessageBox::Show("Ошибка подключения к базе данных!", "Ошибка!");
        }
    }
};

// класс сотрудников
class Worker 
{
	public:
        // ПРОВЕРКА СОТРУДНИКА НА КОРРЕКТНОСТЬ ВВОДА
        inline bool checkWorker(std::string input)
        {
            if (input.size() > 3) {
                //MessageBox::Show("размер = " + input.size(), "Ошибка!");
                if (input.size() > 32) { MessageBox::Show("Много символов", "Ошибка!"); return false; }
                for (int i = 0; i < input.size(); i++)
                {
                    if (!count(worker.begin(), worker.end(), input[i])) {
                        MessageBox::Show("Неправильный ввод данных! (символы)", "Ошибка!");
                        return false;
                    }
                }
                return true;
            }
            else { MessageBox::Show("Мало символов! (min 4)", "Ошибка!"); return false; }
        }

        // ДОБАВЛЕНИЕ СОТРУДНИКА
        inline void Add(std::string login, std::string password, std::string post)
		{
            int count = counterData("select count(*) from worker where login = '" + login + "'");
            if (count == 0) {
                if (checkWorker(login) && checkWorker(password)) {
                    try {
                        connectToSql();
                        try
                        {
                            pstmt = con->prepareStatement("INSERT INTO worker(login, pass, post) VALUES (?, ?, ?)");
                            pstmt->setString(1, login);
                            pstmt->setString(2, password);
                            pstmt->setString(3, post);
                            pstmt->execute();
                            MessageBox::Show("Сотрудник добавлен!", "Успех!");
                            delete con;
                            delete pstmt;
                        }
                        catch (sql::SQLException e)
                        {
                            MessageBox::Show("Не удалось добавить сотрудника! (проверьте входные данные)", "Ошибка!");
                        }
                    }
                    catch (sql::SQLException e) {
                        MessageBox::Show("Ошибка подключения к базе данных!", "Ошибка!");
                    }
                }
            } else { MessageBox::Show("Такая запись уже есть!", "Ошибка!"); }
		}

        // УДАЛЕНИЕ СОТРУДНИКА
        inline void Delete(std::string login)
        {
                int count = counterData("select count(*) from worker where login = '" + login + "'");
                if (count != 0) {
                    if (checkWorker(login)) {
                        try {
                            connectToSql();
                            try
                            {
                                stmt->execute("DELETE FROM worker WHERE login = '" + login + "'");
                                MessageBox::Show("Сотрудник удален!", "Успех!");
                                delete con;
                                delete stmt;
                            }
                            catch (sql::SQLException e)
                            {
                                MessageBox::Show("Не удалось удалить сотрудника! (проверьте входные данные)", "Ошибка!");
                            }
                        }
                        catch (sql::SQLException e) {
                            MessageBox::Show("Ошибка подключения к базе данных!", "Ошибка!");
                        }
                    }
                }
                else { MessageBox::Show("Такой записи нет!", "Ошибка!"); }
        }

        // ИЗМЕНЕНИЕ СОТРУДНИКА
        inline void redact(std::string redactLogin,std::string login, std::string password, std::string post)
        {
            if (checkWorker(redactLogin) && checkWorker(login) && checkWorker(password)) {
                try {
                    connectToSql();
                    try
                    {
                        stmt->execute("UPDATE worker SET login = '" + login + "', pass = '" + password + "', post = '" + post + "' WHERE login = '" + redactLogin + "'");
                        MessageBox::Show("Сотрудник изменен!", "Успех!");
                        delete con;
                        delete stmt;
                    }
                    catch (sql::SQLException e)
                    {
                        MessageBox::Show("Не удалость изменить сотрудника, проверьте входные данные!", "Ошибка!");
                    }
                }
                catch (sql::SQLException e) {
                    MessageBox::Show("Ошибка подключения к базе данных!", "Ошибка!");
                }
            }
        }

        // ПОИСК СОТРУДНИКА
        inline void search(std::string query, worker_data*& data)
        {
            try {
                connectToSql();
                try
                {
                    res = stmt->executeQuery(query);
                    int i = 0;
                    while (res->next()) {
                        data[i].login = res->getString("login");
                        data[i].password = res->getString("pass");
                        data[i].post = res->getString("post");
                        i++;
                    }
                    delete res;
                    delete stmt;
                    delete con;
                }
                catch (sql::SQLException e)
                {
                    MessageBox::Show("Не удалось найти сотрудника! (проверьте входные данные)", "Ошибка!");
                }
            }
            catch (sql::SQLException e) {
                MessageBox::Show("Ошибка подключения к базе данных!", "Ошибка!");
            }
        }
};

// класс отчета
class Report
{
    public:
        inline void search(int halfyear, int year, GenerateReport*& data)
        {
            if (halfyear == 1) {
                try {
                    connectToSql();
                    try
                    {
                        res = stmt->executeQuery("select name, FIO, address, time_sub, start_month, price FROM publication, client, subscription WHERE publication.id = subscription.id_publication AND client.id = subscription.id_client AND start_month < 7 AND start_year = " + std::to_string(year) + " ORDER BY name");
                        int i = 0;
                        int sumForAll = 0;
                        while (res->next()) {
                            data[i].name = res->getString("name");
                            data[i].fio = res->getString("FIO");
                            data[i].address = res->getString("address");
                            data[i].srok = res->getInt(4);
                            data[i].month = res->getInt(5);
                            data[i].price = res->getInt(6);
                            data[i].sumForSub = data[i].srok * data[i].price;
                            sumForAll += data[i].sumForSub;
                            i++;
                        }

                        for (int q = 0; q < i; q++)
                        {
                            int sum = 0;
                            for (int k = 0; k < i; k++)
                            {
                                if (data[q].name == data[k].name)
                                {
                                    sum += data[k].sumForSub;
                                }
                            }
                            data[q].sumForBook = sum;
                            data[q].sumForAll = sumForAll;
                        }
                        delete res;
                        delete stmt;
                        delete con;
                    }
                    catch (sql::SQLException e)
                    {
                        MessageBox::Show("Не удалось создать отчет! (проверьте входные данные)", "Ошибка!");
                    }
                }
                catch (sql::SQLException e) {
                    MessageBox::Show("Ошибка подключения к базе данных!", "Ошибка!");
                }
            }
            else {
                try {
                    connectToSql();
                    try
                    {
                        res = stmt->executeQuery("select name, FIO, address, time_sub, start_month, price FROM publication, client, subscription WHERE publication.id = subscription.id_publication AND client.id = subscription.id_client AND start_month > 6 AND start_year = " + std::to_string(year) + " ORDER BY name");
                        int i = 0;
                        int sumForAll = 0;
                        while (res->next()) {
                            data[i].name = res->getString("name");
                            data[i].fio = res->getString("FIO");
                            data[i].address = res->getString("address");
                            data[i].srok = res->getInt(4);
                            data[i].month = res->getInt(5);
                            data[i].price = res->getInt(6);
                            data[i].sumForSub = data[i].srok * data[i].price;
                            sumForAll += data[i].sumForSub;
                            i++;
                        }

                        for (int q = 0; q < i; q++)
                        {
                            int sum = 0;
                            for (int k = 0; k < i; k++)
                            {
                                if (data[q].name == data[k].name)
                                {
                                    sum += data[k].sumForSub;
                                }
                            }
                            data[q].sumForBook = sum;
                            data[q].sumForAll = sumForAll;
                        }
                        delete res;
                        delete stmt;
                        delete con;
                    }
                    catch (sql::SQLException e)
                    {
                        MessageBox::Show("Не удалось создать отчет! (проверьте входные данные)", "Ошибка!");
                    }
                }
                catch (sql::SQLException e) {
                    MessageBox::Show("Ошибка подключения к базе данных!", "Ошибка!");
                }
            }
        }
};
