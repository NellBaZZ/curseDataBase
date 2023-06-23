#include "AdminForm.h"
#include "RedactClient.h"
#include "RedactSub.h"
#include "RedactOperator.h"
#include "RedactTypeBook.h"
#include "RedactBook.h"

Book booker;
typeBook typer;
Client cliner;
subscribe subislav;
Worker opera;
Report raport;
sub_data supportForSrok;
worker_data supportForWorkerPost;
sub_data supportForGenerateReport;
int minimumOneSubClient = 1;
// ПЕРВОНАЧАЛЬНЫЙ ВИД АДМИНФОРМЫ
System::Void curseFormSQL::AdminForm::printAdmin(System::Object^ sender, System::EventArgs^ e)
{
	String^ login = converterFromstrToSTR(workerData.login);
	String^ post = converterFromstrToSTR(workerData.post);

	labelLogin->Text = login;
	labelPost->Text = post;

	dataGridViewTable->EnableHeadersVisualStyles = false;
	dataGridViewTable->AutoGenerateColumns = false;
}



// КНОПКА ОТКРЫТИЯ ОКНА РЕДАКТИРОВАНИЯ ИЗДАНИЯ
System::Void curseFormSQL::AdminForm::buttonRedactBook_Click(System::Object^ sender, System::EventArgs^ e)
{
	RedactBook^ form = gcnew RedactBook();
	form->Show();
}

// КНОПКА ОТКРЫТИЯ ОКНА РЕДАКТИРОВАНИЯ ТИПА ИЗДАНИЙ
System::Void curseFormSQL::AdminForm::buttonRedactTypeBook_Click(System::Object^ sender, System::EventArgs^ e)
{
	RedactTypeBook^ form = gcnew RedactTypeBook();
	form->Show();
}

// КНОПКА ОТКРЫТИЯ ОКНА РЕДАКТИРОВАНИЯ ПОЛУЧАТЕЛЕЙ
System::Void curseFormSQL::AdminForm::buttonRedactClient_Click(System::Object^ sender, System::EventArgs^ e)
{
	RedactClient^ form = gcnew RedactClient();
	form->Show();
}

// КНОПКА ОТКРЫТИЯ ОКНА РЕДАКТИРОВАНИЯ ПОДПИСОК
System::Void curseFormSQL::AdminForm::buttonRedactSub_Click(System::Object^ sender, System::EventArgs^ e)
{
	RedactSub^ form = gcnew RedactSub();
	form->Show();
}

// КНОПКА ОТКРЫТИЯ ОКНА РЕДАКТИРОВАНИЯ СОТРУДНИКОВ
System::Void curseFormSQL::AdminForm::buttonRedactWorker_Click(System::Object^ sender, System::EventArgs^ e)
{
	RedactOperator^ form = gcnew RedactOperator();
	form->Show();
}

// ВЫЙТИ ИЗ АДМИН ФОРМЫ ОБРАТНО В МЕИНФОРМ
System::Void curseFormSQL::AdminForm::выйтиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	TableClickCode = "";
	TableClickFio = "";
	TableClickAddress = "";

	TableClickNumberSub = "";
	TableClickMonthSub = 0;
	TableClickYearSub = 0;
	TableClickTimeSub = 0;
	

	TableClickIndexBook = "";
	TableClickTypeBook = "";
	TableClickNameBook = "";
	TableClickPriceBook = "";
	
	TableClickTypeBookIndex = "";
	TableClickTypeBookName = "";

	TableClickLogin = "";
	TableClickPassword = "";
	TableClickPost = "";

	this->Close();
	MainForm^ form = gcnew MainForm(); // Создание формы
	form->Show();
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// ФУНКЦИИ ДЛЯ ОБЪЕДИНЕНИЯ ЯЧЕЕК В ТАБЛИЦЕ
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
System::Boolean curseFormSQL::AdminForm::IsTheSameCellValue(int column, int row)
{
	DataGridViewCell^ cell1 = dataGridViewTable[column, row];
	DataGridViewCell^ cell2 = dataGridViewTable[column, row - 1];
	if (cell1->Value == NULL || cell2->Value == NULL)
	{
		return false;
	}
	return cell1->Value->ToString() == cell2->Value->ToString();
}

System::Void curseFormSQL::AdminForm::dataGridViewTable_CellPainting(System::Object^ sender, System::Windows::Forms::DataGridViewCellPaintingEventArgs^ e)
{
	/*if (e->RowIndex >= 0)
		e->AdvancedBorderStyle->Bottom = DataGridViewAdvancedCellBorderStyle::None;*/
	if (e->RowIndex < 1 || e->ColumnIndex < 7)
		return;
	if (e->RowIndex >= 0)
		e->AdvancedBorderStyle->Bottom = DataGridViewAdvancedCellBorderStyle::None;
	if (IsTheSameCellValue(e->ColumnIndex, e->RowIndex))
	{
		e->AdvancedBorderStyle->Top = DataGridViewAdvancedCellBorderStyle::None;
	}
	else
	{
		e->AdvancedBorderStyle->Top = dataGridViewTable->AdvancedCellBorderStyle->Top;
	}
}

System::Void curseFormSQL::AdminForm::dataGridViewTable_CellFormatting(System::Object^ sender, System::Windows::Forms::DataGridViewCellFormattingEventArgs^ e)
{
	if ((e->RowIndex == 0) || (e->ColumnIndex < 7))
		return;
	if (IsTheSameCellValue(e->ColumnIndex, e->RowIndex))
	{
		e->Value = "";
		e->FormattingApplied = true;
		
	}
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// ВЫБОР ДОЛЖНОСТИ СОТРУДНИКА
System::Void curseFormSQL::AdminForm::listBoxWorker_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
	String^ selectedPost = listBoxWorker->SelectedItem->ToString();
	std::string post = converterFromStringFormToUtf8(selectedPost);
	supportForWorkerPost.post = post;
}

// ШАБЛОН ТАБЛИЦЫ ДЛЯ СОТРУДНИКОВ
System::Void curseFormSQL::AdminForm::table_Worker(int count, worker_data* data)
{
	panel1->Visible = false;
	dataGridViewTable->Rows->Clear();;
	dataGridViewTable->Columns->Clear();

	dataGridViewTable->RowCount = count;// количество строк
	dataGridViewTable->ColumnCount = 3;//количество столбцов
	dataGridViewTable->TopLeftHeaderCell->Value = "Список сотрудников";//название таблицы
	dataGridViewTable->TopLeftHeaderCell->Style->BackColor = Color::LavenderBlush;

	//название полей стобцов
	dataGridViewTable->Columns[0]->HeaderCell->Value = "Логин сотрудника";
	dataGridViewTable->Columns[1]->HeaderCell->Value = "Пароль";
	dataGridViewTable->Columns[2]->HeaderCell->Value = "Должность";

	dataGridViewTable->Columns[0]->HeaderCell->Style->BackColor = Color::LavenderBlush;
	dataGridViewTable->Columns[1]->HeaderCell->Style->BackColor = Color::LavenderBlush;
	dataGridViewTable->Columns[2]->HeaderCell->Style->BackColor = Color::LavenderBlush;

	dataGridViewTable->Columns[0]->Width = 300;
	dataGridViewTable->Columns[1]->Width = 300;
	dataGridViewTable->Columns[2]->Width = 295;

	for (int j = 0; j < count; j++)
	{
		// разметка строк
		dataGridViewTable->Rows[j]->HeaderCell->Value = Convert::ToString(j + 1);
		String^ loginer = converterFromstrToSTR(data[j].login);
		String^ passer = converterFromstrToSTR(data[j].password);
		String^ poster = converterFromstrToSTR(data[j].post);
		//Передача значений хэш таблицы при чтении файла в таблицу
		dataGridViewTable->Rows[j]->Cells[0]->Value = gcnew System::String(loginer);
		dataGridViewTable->Rows[j]->Cells[1]->Value = gcnew System::String(passer);
		dataGridViewTable->Rows[j]->Cells[2]->Value = gcnew System::String(poster);
		if (j % 2 == 0) {
			dataGridViewTable->Rows[j]->DefaultCellStyle->BackColor = Color::Azure;
			dataGridViewTable->Rows[j]->HeaderCell->Style->BackColor = Color::Azure;
		}
		else {
			dataGridViewTable->Rows[j]->DefaultCellStyle->BackColor = Color::LavenderBlush;
			dataGridViewTable->Rows[j]->HeaderCell->Style->BackColor = Color::LavenderBlush;
		}
	}
	dataGridViewTable->RowHeadersWidth = 80;
}

// КНОПКА ПОИСКА СОТРУДНИКА ПО ДОЛЖНОСТИ
System::Void curseFormSQL::AdminForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{	
	int countPost = counterData("SELECT COUNT(*) FROM worker where post = '" + supportForWorkerPost.post + "'");
	if (countPost != 0)
	{
		worker_data* dataWorker = new worker_data[countPost];
		opera.search("SELECT * FROM worker WHERE post = '" + supportForWorkerPost.post + "'", dataWorker);
		table_Worker(countPost, dataWorker);
	}
	else MessageBox::Show("Список таких дожностей пуст!", "Ошибка!");
}

// КНОПКА ПОИСКА СОТРУДНИКА ПО ЛОГИНУ
System::Void curseFormSQL::AdminForm::buttonSearchLogin_Click(System::Object^ sender, System::EventArgs^ e)
{
	std::string login = converterFromStringFormToUtf8(textBoxSearchWorker->Text->ToString());
	if (opera.checkWorker(login)) {
		int countLogin = counterData("SELECT COUNT(*) FROM worker where login = '" + login + "'");
		if (countLogin != 0)
		{
			worker_data* dataWorker = new worker_data[countLogin];
			opera.search("SELECT * FROM worker WHERE login = '" + login + "'", dataWorker);
			table_Worker(countLogin, dataWorker);
		}
		else MessageBox::Show("Сотрудника с таким логином нет!", "Ошибка!");
	}
}

// КНОПКА ПОКАЗАТЬ ВСЕХ СОТРУДНИКОВ
System::Void curseFormSQL::AdminForm::buttonCheckWorker_Click(System::Object^ sender, System::EventArgs^ e)
{
	int countWorker = counterData("SELECT COUNT(*) FROM worker");
	if (countWorker != 0)
	{
		worker_data* dataWorker = new worker_data[countWorker];
		opera.search("SELECT * FROM worker", dataWorker);
		table_Worker(countWorker, dataWorker);
	}
	else MessageBox::Show("Список сотрудников пуст!", "Ошибка!");
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// ШАБЛОН ТАБЛИЦЫ ДЛЯ ИЗДАНИЙ
System::Void curseFormSQL::AdminForm::table_Book(int count, book_data* data)
{
	panel1->Visible = false;
	dataGridViewTable->Rows->Clear();;
	dataGridViewTable->Columns->Clear();

	dataGridViewTable->RowCount = count;// количество строк
	dataGridViewTable->ColumnCount = 5;//количество столбцов
	dataGridViewTable->TopLeftHeaderCell->Value = "Список изданий";//название таблицы
	dataGridViewTable->TopLeftHeaderCell->Style->BackColor = Color::LavenderBlush;

	//название полей стобцов
	dataGridViewTable->Columns[0]->HeaderCell->Value = "Индекс издания";
	dataGridViewTable->Columns[1]->HeaderCell->Value = "Номер типа издания";
	dataGridViewTable->Columns[2]->HeaderCell->Value = "Тип издания";
	dataGridViewTable->Columns[3]->HeaderCell->Value = "Название издания";
	dataGridViewTable->Columns[4]->HeaderCell->Value = "Цена издания";

	dataGridViewTable->Columns[0]->HeaderCell->Style->BackColor = Color::LavenderBlush;
	dataGridViewTable->Columns[1]->HeaderCell->Style->BackColor = Color::LavenderBlush;
	dataGridViewTable->Columns[2]->HeaderCell->Style->BackColor = Color::LavenderBlush;
	dataGridViewTable->Columns[3]->HeaderCell->Style->BackColor = Color::LavenderBlush;
	dataGridViewTable->Columns[4]->HeaderCell->Style->BackColor = Color::LavenderBlush;

	dataGridViewTable->Columns[0]->Width = 70;
	dataGridViewTable->Columns[1]->Width = 70;
	dataGridViewTable->Columns[2]->Width = 300;
	dataGridViewTable->Columns[3]->Width = 300;
	dataGridViewTable->Columns[4]->Width = 155;

	for (int j = 0; j < count; j++)
	{
		// разметка строк
		dataGridViewTable->Rows[j]->HeaderCell->Value = Convert::ToString(j + 1);
		String^ nameron = converterFromstrToSTR(data[j].name);
		String^ nameTypeBook = converterFromstrToSTR(data[j].nameTypeBook);
		//Передача значений хэш таблицы при чтении файла в таблицу
		dataGridViewTable->Rows[j]->Cells[0]->Value = data[j].index;
		dataGridViewTable->Rows[j]->Cells[1]->Value = data[j].id_type;
		dataGridViewTable->Rows[j]->Cells[2]->Value = gcnew System::String(nameTypeBook);
		dataGridViewTable->Rows[j]->Cells[3]->Value = gcnew System::String(nameron);
		dataGridViewTable->Rows[j]->Cells[4]->Value = data[j].price;
		if (j % 2 == 0) {
			dataGridViewTable->Rows[j]->DefaultCellStyle->BackColor = Color::Azure;
			dataGridViewTable->Rows[j]->HeaderCell->Style->BackColor = Color::Azure;
		}
		else {
			dataGridViewTable->Rows[j]->DefaultCellStyle->BackColor = Color::LavenderBlush;
			dataGridViewTable->Rows[j]->HeaderCell->Style->BackColor = Color::LavenderBlush;
		}
	}
	dataGridViewTable->RowHeadersWidth = 80;
}

// КНОПКА ПОСМОТРЕТЬ СПИСОК ИЗДАНИЙ
System::Void curseFormSQL::AdminForm::buttonCheckBook_Click(System::Object^ sender, System::EventArgs^ e)
{
	int countBook = counterData("SELECT COUNT(*) FROM publication");
	if (countBook != 0)
	{
		book_data* dataBook = new book_data[countBook];
		booker.search("SELECT publication.id, id_type, tip, name, price FROM publication, type_publication WHERE publication.id_type = type_publication.id", dataBook);
		table_Book(countBook, dataBook);
	}
	else MessageBox::Show("Список изданий пуст!", "Ошибка!");
}

// КНОПКА ПОИСКА ИЗДАНИЙ ПО ИНДЕКСУ
System::Void curseFormSQL::AdminForm::buttonSearchIndexBook_Click(System::Object^ sender, System::EventArgs^ e)
{
	std::string ind;
	Convert_String_to_string(textBoxSearchIndexBook->Text->ToString(), ind);
	if (checkId(ind)) {
		int count = counterData("SELECT COUNT(*) FROM publication where id = " + ind);
		if (count != 0)
		{
			book_data* dataBook = new book_data[count];
			booker.search("SELECT publication.id, id_type, tip, name, price FROM publication, type_publication WHERE publication.id_type = type_publication.id and publication.id = " + ind, dataBook);
			table_Book(count, dataBook);
		}
		else MessageBox::Show("Издания с таким названием нет!", "Ошибка!");
	}
}

// КНОПКА ПОИСКА ИЗДАНИЙ ПО НОМЕРУ ТИПУ ИЗДАНИЯ
System::Void curseFormSQL::AdminForm::buttonSearchIndexTypeBook_Click(System::Object^ sender, System::EventArgs^ e)
{
	std::string typeInd;
	Convert_String_to_string(textBoxSearchTypeBook->Text->ToString(), typeInd);
	if (checkId(typeInd)) {
		int count = counterData("SELECT COUNT(*) FROM publication where id_type = " + typeInd);
		if (count != 0)
		{
			book_data* dataBook = new book_data[count];
			booker.search("SELECT publication.id, id_type, tip, name, price FROM publication, type_publication WHERE publication.id_type = type_publication.id and id_type = " + typeInd, dataBook);
			table_Book(count, dataBook);
		}
		else MessageBox::Show("Изданий с таким типом нет!", "Ошибка!");
	}
}

// КНОПКА ПОИСКА ИЗДАНИЯ ПО НАЗВАНИЮ
System::Void curseFormSQL::AdminForm::buttonSearchNameBook_Click(System::Object^ sender, System::EventArgs^ e)
{
	std::string name = converterFromStringFormToUtf8(textBoxSearchNameBook->Text->ToString());
	if (checkName(name)) {
		int countName = counterData("SELECT COUNT(*) FROM publication where name = '" + name + "'");
		if (countName != 0)
		{
			book_data* dataBook = new book_data[countName];
			booker.search("SELECT publication.id, id_type, tip, name, price FROM publication, type_publication WHERE publication.id_type = type_publication.id and name = '" + name + "'", dataBook);
			table_Book(countName, dataBook);
		}
		else MessageBox::Show("Издания с таким названием нет!", "Ошибка!");
	}
}

// КНОПКА ПОИСКА ИЗДАНИЯ ПО ЦЕНЕ
System::Void curseFormSQL::AdminForm::buttonSearchPriceBook_Click(System::Object^ sender, System::EventArgs^ e)
{
	std::string price;
	Convert_String_to_string(textBoxSearchPriceBook->Text->ToString(), price);
	if (checkId(price)) {
		int count = counterData("SELECT COUNT(*) FROM publication where price <= " + price);
		if (count != 0)
		{
			book_data* dataBook = new book_data[count];
			booker.search("SELECT publication.id, id_type, tip, name, price FROM publication, type_publication WHERE publication.id_type = type_publication.id and price <= " + price, dataBook);
			table_Book(count, dataBook);
		}
		else MessageBox::Show("Изданий с такой стоимостью нет!", "Ошибка!");
	}
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// ШАБЛОН ТАБЛИЦЫ ДЛЯ ТИПОВ ИЗДАНИЙ
System::Void curseFormSQL::AdminForm::table_typeBook(int count, typeBook_data* data)
{
	panel1->Visible = false;
	dataGridViewTable->Rows->Clear();;
	dataGridViewTable->Columns->Clear();

	dataGridViewTable->RowCount = count;// количество строк
	dataGridViewTable->ColumnCount = 2;//количество столбцов
	dataGridViewTable->TopLeftHeaderCell->Value = "Список типов изданий";//название таблицы
	dataGridViewTable->TopLeftHeaderCell->Style->BackColor = Color::LavenderBlush;

	dataGridViewTable->Columns[0]->HeaderCell->Style->BackColor = Color::LavenderBlush;
	dataGridViewTable->Columns[1]->HeaderCell->Style->BackColor = Color::LavenderBlush;

	//название полей стобцов
	dataGridViewTable->Columns[0]->HeaderCell->Value = "Номер типа издания";
	dataGridViewTable->Columns[1]->HeaderCell->Value = "Тип издания";


	dataGridViewTable->Columns[0]->Width = 100;
	dataGridViewTable->Columns[1]->Width = 800;

	for (int j = 0; j < count; j++)
	{
		// разметка строк
		dataGridViewTable->Rows[j]->HeaderCell->Value = Convert::ToString(j + 1);
		String^ typeron = converterFromstrToSTR(data[j].tip);
		//Передача значений хэш таблицы при чтении файла в таблицу
		dataGridViewTable->Rows[j]->Cells[0]->Value = data[j].id;
		dataGridViewTable->Rows[j]->Cells[1]->Value = gcnew System::String(typeron);
		if (j % 2 == 0) {
			dataGridViewTable->Rows[j]->DefaultCellStyle->BackColor = Color::Azure;
			dataGridViewTable->Rows[j]->HeaderCell->Style->BackColor = Color::Azure;
		}
		else {
			dataGridViewTable->Rows[j]->DefaultCellStyle->BackColor = Color::LavenderBlush;
			dataGridViewTable->Rows[j]->HeaderCell->Style->BackColor = Color::LavenderBlush;
		}
	}
	dataGridViewTable->RowHeadersWidth = 80;
}

// КНОПКА ПОСМОТРЕТЬ ВСЕ ТИПЫ ИЗДАНИЙ
System::Void curseFormSQL::AdminForm::buttonCheckTypeBook_Click(System::Object^ sender, System::EventArgs^ e)
{
	int countTypeBook = counterData("SELECT COUNT(*) FROM type_publication");
	if (countTypeBook != 0)
	{
		typeBook_data* dataTypeBook = new typeBook_data[countTypeBook];
		typer.search("SELECT * FROM type_publication", dataTypeBook);
		table_typeBook(countTypeBook, dataTypeBook);
	}
	else MessageBox::Show("Список типов изданий пуст!", "Ошибка!");
}

// КНОПКА ПОИСКА ТИПА ИЗДАНИЯ ПО ТИПУ
System::Void curseFormSQL::AdminForm::buttonSearchTypeBook_Click(System::Object^ sender, System::EventArgs^ e)
{
	std::string tip = converterFromStringFormToUtf8(textBoxSearchNameType->Text->ToString());
	if (checkName(tip)) {
		int countTip = counterData("SELECT COUNT(*) FROM type_publication where tip = '" + tip + "'");
		if (countTip != 0)
		{
			typeBook_data* dataTypeBook = new typeBook_data[countTip];
			typer.search("SELECT * FROM type_publication WHERE tip = '" + tip + "'", dataTypeBook);
			table_typeBook(countTip, dataTypeBook);
		}
		else MessageBox::Show("Типа издания с таким названием нет!!", "Ошибка!");
	}
}

// КНОПКА ПОИСКА ТИПА ИЗДАНИЯ ПО НОМЕРУ ТИПА
System::Void curseFormSQL::AdminForm::buttonSearchTypeBookId_Click(System::Object^ sender, System::EventArgs^ e)
{
	std::string id;
	Convert_String_to_string(textBoxSearchIndexType->Text->ToString(), id);
	if (checkId(id)) {
		int count = counterData("SELECT COUNT(*) FROM type_publication where id = " + id);
		if (count != 0)
		{
			typeBook_data* dataTypeBook = new typeBook_data[count];
			typer.search("SELECT * FROM type_publication WHERE id = " + id, dataTypeBook);
			table_typeBook(count, dataTypeBook);
		}
		else MessageBox::Show("Типа издания с таким индексом нет!", "Ошибка!");
	}
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// ШАБЛОН ТАБЛИЦЫ ДЛЯ КЛИЕНТА
System::Void curseFormSQL::AdminForm::table_Client(int count, client_data* data)
{
	panel1->Visible = false;
	dataGridViewTable->Rows->Clear();;
	dataGridViewTable->Columns->Clear();

	dataGridViewTable->RowCount = count;// количество строк
	dataGridViewTable->ColumnCount = 3;//количество столбцов
	dataGridViewTable->TopLeftHeaderCell->Value = "Список клиентов";//название таблицы
	dataGridViewTable->TopLeftHeaderCell->Style->BackColor = Color::LavenderBlush;

	//название полей стобцов
	dataGridViewTable->Columns[0]->HeaderCell->Value = "Код клиента";
	dataGridViewTable->Columns[1]->HeaderCell->Value = "ФИО клиента";
	dataGridViewTable->Columns[2]->HeaderCell->Value = "Адрес клиента";

	dataGridViewTable->Columns[0]->HeaderCell->Style->BackColor = Color::LavenderBlush;
	dataGridViewTable->Columns[1]->HeaderCell->Style->BackColor = Color::LavenderBlush;
	dataGridViewTable->Columns[2]->HeaderCell->Style->BackColor = Color::LavenderBlush;

	dataGridViewTable->Columns[0]->Width = 100;
	dataGridViewTable->Columns[1]->Width = 395;
	dataGridViewTable->Columns[2]->Width = 400;

	for (int j = 0; j < count; j++)
	{
		// разметка строк
		dataGridViewTable->Rows[j]->HeaderCell->Value = Convert::ToString(j + 1);
		String^ faeron = converterFromstrToSTR(data[j].FIO);
		String^ addresson = converterFromstrToSTR(data[j].address);
		//Передача значений хэш таблицы при чтении файла в таблицу
		dataGridViewTable->Rows[j]->Cells[0]->Value = data[j].id;
		dataGridViewTable->Rows[j]->Cells[1]->Value = gcnew System::String(faeron);
		dataGridViewTable->Rows[j]->Cells[2]->Value = gcnew System::String(addresson);
		if (j % 2 == 0) {
			dataGridViewTable->Rows[j]->DefaultCellStyle->BackColor = Color::Azure;
			dataGridViewTable->Rows[j]->HeaderCell->Style->BackColor = Color::Azure;
		}
		else {
			dataGridViewTable->Rows[j]->DefaultCellStyle->BackColor = Color::LavenderBlush;
			dataGridViewTable->Rows[j]->HeaderCell->Style->BackColor = Color::LavenderBlush;
		}
	}
	dataGridViewTable->RowHeadersWidth = 80;
}

// КНОПКА ПОСМОТРЕТЬ ВСЕХ КЛИЕНТОВ
System::Void curseFormSQL::AdminForm::buttonCheckClient_Click(System::Object^ sender, System::EventArgs^ e)
{
	int countClient = counterData("SELECT COUNT(*) FROM client");
	if (countClient != 0)
	{
		client_data* dataClient = new client_data[countClient];
		cliner.search("SELECT * FROM client", dataClient);
		table_Client(countClient, dataClient);
	}
	else MessageBox::Show("Список клиентов пуст!", "Ошибка!");
}

// КНОПКА ПОИСКА КЛИЕНТА ПО КОДУ
System::Void curseFormSQL::AdminForm::buttonSearchCodeClient_Click(System::Object^ sender, System::EventArgs^ e)
{
	std::string code;
	Convert_String_to_string(textBoxSearchClient->Text->ToString(), code);
	if (checkId(code)) {
		int count = counterData("SELECT COUNT(*) FROM client where id = " + code);
		if (count != 0)
		{
			client_data* dataCLient = new client_data[count];
			cliner.search("SELECT * FROM client WHERE id = " + code, dataCLient);
			table_Client(count, dataCLient);
		}
		else MessageBox::Show("Типа издания с таким индексом нет!", "Ошибка!");
	}
}

// КНОПКА ПОИСКА КЛИЕНТА ПО ФИО
System::Void curseFormSQL::AdminForm::buttonSearchFIOClient_Click(System::Object^ sender, System::EventArgs^ e)
{
	std::string FIO = converterFromStringFormToUtf8(textBoxSearchFIOClient->Text->ToString());
	if (cliner.checkFIO(FIO)) {
		int count = counterData("SELECT COUNT(*) FROM client where FIO = '" + FIO + "'");
		if (count != 0)
		{
			client_data* dataCLient = new client_data[count];
			cliner.search("SELECT * FROM client WHERE FIO = '" + FIO + "'", dataCLient);
			table_Client(count, dataCLient);
		}
		else MessageBox::Show("Клиента с таким ФИО нет!!", "Ошибка!");
	}
}

// КНОПКА ПОИСКА КЛИЕНТА ПО АДРЕСУ
System::Void curseFormSQL::AdminForm::buttonSearchAddressClient_Click(System::Object^ sender, System::EventArgs^ e)
{
	std::string address = converterFromStringFormToUtf8(textBoxSearchAddressClient->Text->ToString());
	if (cliner.checkAddress(address)) {
		int count = counterData("SELECT COUNT(*) FROM client where address = '" + address + "'");
		if (count != 0)
		{
			client_data* dataCLient = new client_data[count];
			cliner.search("SELECT * FROM client WHERE address = '" + address + "'", dataCLient);
			table_Client(count, dataCLient);
		}
		else MessageBox::Show("Клиента с таким адресом нет!", "Ошибка!");
	}
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// ВЫБОР СРОКА ПОДПИСКИ 
System::Void curseFormSQL::AdminForm::listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
	String^ selectedSubTime = listBox1->SelectedItem->ToString();
	std::string sub_time;
	Convert_String_to_string(selectedSubTime, sub_time);
	char firstletter = sub_time[0];
	int number = firstletter - '0';
	supportForSrok.time_sub = number;
}

// ВЫБОР СТАРТОВОГО МЕСЯЦА ПОДПИСКИ
System::Void curseFormSQL::AdminForm::listBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
	String^ selectedSubMonth = listBox2->SelectedItem->ToString();
	std::string start_month;
	Convert_String_to_string(selectedSubMonth, start_month);
	supportForSrok.start_month = stoi(start_month);
}

// ВЫБОР СТАРТОВОГО ГОДА ПОДПИСКИ
System::Void curseFormSQL::AdminForm::listBox3_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
	String^ selectedSubYear = listBox3->SelectedItem->ToString();
	std::string start_year;
	Convert_String_to_string(selectedSubYear, start_year);
	supportForSrok.start_year = stoi(start_year);
}

// ШАБЛОН ТАБЛИЦЫ ДЛЯ ПОДПИСКИ
System::Void curseFormSQL::AdminForm::table_Sub(int count, sub_data* data)
{
	panel1->Visible = false;
	dataGridViewTable->Rows->Clear();;
	dataGridViewTable->Columns->Clear();

	dataGridViewTable->RowCount = count;// количество строк
	dataGridViewTable->ColumnCount = 8;//количество столбцов
	dataGridViewTable->TopLeftHeaderCell->Value = "Список подписок";//название таблицы
	dataGridViewTable->TopLeftHeaderCell->Style->BackColor = Color::LavenderBlush;

	//название полей стобцов
	dataGridViewTable->Columns[0]->HeaderCell->Value = "Номер подписки";
	dataGridViewTable->Columns[1]->HeaderCell->Value = "Индекс издания";
	dataGridViewTable->Columns[2]->HeaderCell->Value = "Название издания";
	dataGridViewTable->Columns[3]->HeaderCell->Value = "Код клиента";
	dataGridViewTable->Columns[4]->HeaderCell->Value = "ФИО клиента";
	dataGridViewTable->Columns[5]->HeaderCell->Value = "Начальный месяц";
	dataGridViewTable->Columns[6]->HeaderCell->Value = "Начальный год";
	dataGridViewTable->Columns[7]->HeaderCell->Value = "Срок действия";

	dataGridViewTable->Columns[0]->HeaderCell->Style->BackColor = Color::LavenderBlush;
	dataGridViewTable->Columns[1]->HeaderCell->Style->BackColor = Color::LavenderBlush;
	dataGridViewTable->Columns[2]->HeaderCell->Style->BackColor = Color::LavenderBlush;
	dataGridViewTable->Columns[3]->HeaderCell->Style->BackColor = Color::LavenderBlush;
	dataGridViewTable->Columns[4]->HeaderCell->Style->BackColor = Color::LavenderBlush;
	dataGridViewTable->Columns[5]->HeaderCell->Style->BackColor = Color::LavenderBlush;
	dataGridViewTable->Columns[6]->HeaderCell->Style->BackColor = Color::LavenderBlush;
	dataGridViewTable->Columns[7]->HeaderCell->Style->BackColor = Color::LavenderBlush;

	dataGridViewTable->Columns[0]->Width = 60;
	dataGridViewTable->Columns[1]->Width = 60;
	dataGridViewTable->Columns[2]->Width = 250;
	dataGridViewTable->Columns[3]->Width = 60;
	dataGridViewTable->Columns[4]->Width = 250;
	dataGridViewTable->Columns[5]->Width = 70;
	dataGridViewTable->Columns[6]->Width = 75;
	dataGridViewTable->Columns[7]->Width = 70;

	for (int j = 0; j < count; j++)
	{
		// разметка строк
		dataGridViewTable->Rows[j]->HeaderCell->Value = Convert::ToString(j + 1);
		String^ faeron = converterFromstrToSTR(data[j].FIO);
		String^ nameron = converterFromstrToSTR(data[j].name);
		//Передача значений хэш таблицы при чтении файла в таблицу
		dataGridViewTable->Rows[j]->Cells[0]->Value = data[j].id;
		dataGridViewTable->Rows[j]->Cells[1]->Value = data[j].id_publication;
		dataGridViewTable->Rows[j]->Cells[2]->Value = gcnew System::String(nameron);
		dataGridViewTable->Rows[j]->Cells[3]->Value = data[j].id_client;
		dataGridViewTable->Rows[j]->Cells[4]->Value = gcnew System::String(faeron);
		dataGridViewTable->Rows[j]->Cells[5]->Value = data[j].start_month;
		dataGridViewTable->Rows[j]->Cells[6]->Value = data[j].start_year;
		dataGridViewTable->Rows[j]->Cells[7]->Value = data[j].time_sub;
		if (j % 2 == 0) {
			dataGridViewTable->Rows[j]->DefaultCellStyle->BackColor = Color::Azure;
			dataGridViewTable->Rows[j]->HeaderCell->Style->BackColor = Color::Azure;
		}
		else {
			dataGridViewTable->Rows[j]->DefaultCellStyle->BackColor = Color::LavenderBlush;
			dataGridViewTable->Rows[j]->HeaderCell->Style->BackColor = Color::LavenderBlush;
		}
	}
	dataGridViewTable->RowHeadersWidth = 80;
}

// КНОПКА ПОСМОТРЕТЬ ВСЕ ПОДПИСКИ
System::Void curseFormSQL::AdminForm::buttonCheckSub_Click(System::Object^ sender, System::EventArgs^ e)
{
	int count = counterData("SELECT COUNT(*) FROM subscription, publication, client WHERE publication.id = subscription.id_publication AND client.id  = subscription.id_client");
	if (count != 0)
	{
		sub_data* dataSub = new sub_data[count];
		subislav.search("SELECT subscription.id, id_publication, name, id_client, FIO, start_month, start_year, time_sub FROM subscription, publication, client WHERE publication.id = subscription.id_publication AND client.id  = subscription.id_client", dataSub);
		table_Sub(count, dataSub);
	}
	else MessageBox::Show("Список подписок пуст!", "Ошибка!");
}

// КНОПКА ПОИСКА ПОДПИСКИ ПО ЕЕ НОМЕРУ 
System::Void curseFormSQL::AdminForm::buttonSearchNumberSub_Click(System::Object^ sender, System::EventArgs^ e)
{
	std::string number;
	Convert_String_to_string(textBoxSearchSub->Text->ToString(), number);
	if (checkId(number)) {
		int count = counterData("SELECT COUNT(*) FROM subscription, publication, client WHERE publication.id = subscription.id_publication AND client.id  = subscription.id_client AND subscription.id = " + number);
		if (count != 0)
		{
			sub_data* dataSub = new sub_data[count];
			subislav.search("SELECT subscription.id, id_publication, name, id_client, FIO, start_month, start_year, time_sub FROM subscription, publication, client WHERE publication.id = subscription.id_publication AND client.id  = subscription.id_client AND subscription.id = " + number, dataSub);
			table_Sub(count, dataSub);
		}
		else MessageBox::Show("Подписки с таким номером нет!", "Ошибка!");
	}
}

// КНОПКА ПОИСКА ПОДПИСКИ ПО СРОКУ ДЕЙСТВИЯ
System::Void curseFormSQL::AdminForm::buttonSearch_Click(System::Object^ sender, System::EventArgs^ e)
{
	int count = counterData("SELECT COUNT(*) FROM subscription, publication, client WHERE publication.id = subscription.id_publication AND client.id  = subscription.id_client AND subscription.time_sub = " + std::to_string(supportForSrok.time_sub));
	if (count != 0)
	{
		sub_data* dataSub = new sub_data[count];
		subislav.search("SELECT subscription.id, id_publication, name, id_client, FIO, start_month, start_year, time_sub FROM subscription, publication, client WHERE publication.id = subscription.id_publication AND client.id  = subscription.id_client AND subscription.time_sub = " + std::to_string(supportForSrok.time_sub), dataSub);
		table_Sub(count, dataSub);
	}
	else MessageBox::Show("Подписки с таким сроком действия нет!", "Ошибка!");
}

// КНОПКА ПОИСКА ПОДПИСКИ ПО ИНДЕКСУ ИЗДАНИЯ
System::Void curseFormSQL::AdminForm::buttonSearchIndexSub_Click(System::Object^ sender, System::EventArgs^ e)
{
	std::string index;
	Convert_String_to_string(textBoxSearchIndexBookSub->Text->ToString(), index);
	if (checkId(index)) {
		int count = counterData("SELECT COUNT(*) FROM subscription, publication, client WHERE publication.id = subscription.id_publication AND client.id  = subscription.id_client AND subscription.id_publication = " + index);
		if (count != 0)
		{
			sub_data* dataSub = new sub_data[count];
			subislav.search("SELECT subscription.id, id_publication, name, id_client, FIO, start_month, start_year, time_sub FROM subscription, publication, client WHERE publication.id = subscription.id_publication AND client.id  = subscription.id_client AND subscription.id_publication = " + index, dataSub);
			table_Sub(count, dataSub);
		}
		else MessageBox::Show("Подписки с таким индексом издания нет!", "Ошибка!");
	}
}

// КНОПКА ПОИСКА ПОДПИСКИ ПО КОДУ КЛИЕНТА
System::Void curseFormSQL::AdminForm::buttonSearchCodeSub_Click(System::Object^ sender, System::EventArgs^ e)
{
	std::string code;
	Convert_String_to_string(textBoxSearchCodeClientSub->Text->ToString(), code);
	if (checkId(code)) {
		int count = counterData("SELECT COUNT(*) FROM subscription, publication, client WHERE publication.id = subscription.id_publication AND client.id  = subscription.id_client AND subscription.id_client = " + code);
		if (count != 0)
		{
			sub_data* dataSub = new sub_data[count];
			subislav.search("SELECT subscription.id, id_publication, name, id_client, FIO, start_month, start_year, time_sub FROM subscription, publication, client WHERE publication.id = subscription.id_publication AND client.id  = subscription.id_client AND subscription.id_client = " + code, dataSub);
			table_Sub(count, dataSub);
		}
		else MessageBox::Show("Подписки с таким кодом клиента нет!", "Ошибка!");
	}
}

// КНОПКА ПОИСКА ПОДПИСКИ ПО НАЧАЛУ МЕСЯЦА ДЕЙСТВИЯ
System::Void curseFormSQL::AdminForm::buttonSearchMonthSub_Click(System::Object^ sender, System::EventArgs^ e)
{
	int count = counterData("SELECT COUNT(*) FROM subscription, publication, client WHERE publication.id = subscription.id_publication AND client.id  = subscription.id_client AND subscription.start_month = " + std::to_string(supportForSrok.start_month));
	if (count != 0)
	{
		sub_data* dataSub = new sub_data[count];
		subislav.search("SELECT subscription.id, id_publication, name, id_client, FIO, start_month, start_year, time_sub FROM subscription, publication, client WHERE publication.id = subscription.id_publication AND client.id  = subscription.id_client AND subscription.start_month = " + std::to_string(supportForSrok.start_month), dataSub);
		table_Sub(count, dataSub);
	}
	else MessageBox::Show("Подписки с таким месяцем начала действия нет!", "Ошибка!");
}

// КНОПКА ПОИСККА ПОДПИСКИ ПО НАЧАЛУ ГОДА ДЕЙСТВИЯ
System::Void curseFormSQL::AdminForm::buttonSearchYearSub_Click(System::Object^ sender, System::EventArgs^ e)
{
	int count = counterData("SELECT COUNT(*) FROM subscription, publication, client WHERE publication.id = subscription.id_publication AND client.id  = subscription.id_client AND subscription.start_year = " + std::to_string(supportForSrok.start_year));
	if (count != 0)
	{
		sub_data* dataSub = new sub_data[count];
		subislav.search("SELECT subscription.id, id_publication, name, id_client, FIO, start_month, start_year, time_sub FROM subscription, publication, client WHERE publication.id = subscription.id_publication AND client.id  = subscription.id_client AND subscription.start_year = " + std::to_string(supportForSrok.start_year), dataSub);
		table_Sub(count, dataSub);
	}
	else MessageBox::Show("Подписки с таким годом начала действия нет!", "Ошибка!");
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// ВЫБОР ПОЛУГОДИЯ ДЛЯ ОТЧЕТА
System::Void curseFormSQL::AdminForm::listBox4_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
	String^ selectedHalfYear = listBox4->SelectedItem->ToString();
	std::string halfYear;
	Convert_String_to_string(selectedHalfYear, halfYear);
	char firstletter = halfYear[0];
	int number = firstletter - '0';
	supportForGenerateReport.time_sub = number;
}

// ВЫБОР ГОДА ДЛЯ ОТЧЕТА
System::Void curseFormSQL::AdminForm::listBox5_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
	String^ selectedYear = listBox5->SelectedItem->ToString();
	std::string year;
	Convert_String_to_string(selectedYear, year);
	supportForGenerateReport.start_year = stoi(year);
}

// ШАБЛОН ДЛЯ ТАБЛИЦЫ ОТЧЕТА
System::Void curseFormSQL::AdminForm::table_GenerateReport(int count, GenerateReport* data)
{
	dataGridViewTable->Rows->Clear();;
	dataGridViewTable->Columns->Clear();

	dataGridViewTable->RowCount = count;// количество строк
	dataGridViewTable->ColumnCount = 8;//количество столбцов
	String^ selectedYear = listBox5->SelectedItem->ToString();
	dataGridViewTable->TopLeftHeaderCell->Value = "Отчет за " + selectedYear + " год";//название таблицы
	dataGridViewTable->TopLeftHeaderCell->Style->BackColor = Color::LavenderBlush;

	//название полей стобцов
	dataGridViewTable->Columns[0]->HeaderCell->Value = "Название издания";
	dataGridViewTable->Columns[1]->HeaderCell->Value = "ФИО клиента";
	dataGridViewTable->Columns[2]->HeaderCell->Value = "Адрес клиента";
	dataGridViewTable->Columns[3]->HeaderCell->Value = "Срок подписки";
	dataGridViewTable->Columns[4]->HeaderCell->Value = "Старт. месяц действия";
	dataGridViewTable->Columns[5]->HeaderCell->Value = "Цена за 1 мес. в руб.";
	dataGridViewTable->Columns[6]->HeaderCell->Value = "Итого к оплате руб.";
	dataGridViewTable->Columns[7]->HeaderCell->Value = "Итого по изданию";

	dataGridViewTable->Columns[0]->HeaderCell->Style->BackColor = Color::LavenderBlush;
	dataGridViewTable->Columns[1]->HeaderCell->Style->BackColor = Color::LavenderBlush;
	dataGridViewTable->Columns[2]->HeaderCell->Style->BackColor = Color::LavenderBlush;
	dataGridViewTable->Columns[3]->HeaderCell->Style->BackColor = Color::LavenderBlush;
	dataGridViewTable->Columns[4]->HeaderCell->Style->BackColor = Color::LavenderBlush;
	dataGridViewTable->Columns[5]->HeaderCell->Style->BackColor = Color::LavenderBlush;
	dataGridViewTable->Columns[6]->HeaderCell->Style->BackColor = Color::LavenderBlush;
	dataGridViewTable->Columns[7]->HeaderCell->Style->BackColor = Color::LavenderBlush;

	dataGridViewTable->Columns[0]->Width = 225;
	dataGridViewTable->Columns[1]->Width = 225;
	dataGridViewTable->Columns[2]->Width = 225;
	dataGridViewTable->Columns[3]->Width = 70;
	dataGridViewTable->Columns[4]->Width = 70;
	dataGridViewTable->Columns[5]->Width = 70;
	dataGridViewTable->Columns[6]->Width = 70;
	dataGridViewTable->Columns[7]->Width = 70;

	for (int j = 0; j < count; j++)
	{
		// разметка строк
		dataGridViewTable->Rows[j]->HeaderCell->Value = Convert::ToString(j + 1);
		String^ nameron = converterFromstrToSTR(data[j].name);
		String^ faeron = converterFromstrToSTR(data[j].fio);
		String^ addresson = converterFromstrToSTR(data[j].address);
		//Передача значений хэш таблицы при чтении файла в таблицу
		dataGridViewTable->Rows[j]->Cells[0]->Value = gcnew System::String(nameron);
		dataGridViewTable->Rows[j]->Cells[1]->Value = gcnew System::String(faeron);
		dataGridViewTable->Rows[j]->Cells[2]->Value = gcnew System::String(addresson);
		dataGridViewTable->Rows[j]->Cells[3]->Value = data[j].srok;
		dataGridViewTable->Rows[j]->Cells[4]->Value = data[j].month;
		dataGridViewTable->Rows[j]->Cells[5]->Value = data[j].price;
		dataGridViewTable->Rows[j]->Cells[6]->Value = data[j].sumForSub;
		dataGridViewTable->Rows[j]->Cells[7]->Value = data[j].sumForBook;
		if (j % 2 == 0) {
			dataGridViewTable->Rows[j]->DefaultCellStyle->BackColor = Color::Azure;
			dataGridViewTable->Rows[j]->HeaderCell->Style->BackColor = Color::Azure;
		}
		else {
			dataGridViewTable->Rows[j]->DefaultCellStyle->BackColor = Color::LavenderBlush;
			dataGridViewTable->Rows[j]->HeaderCell->Style->BackColor = Color::LavenderBlush;
		}
	}
	dataGridViewTable->RowHeadersWidth = 80;
	panel1->Visible = true;
	String^ sum = converterFromstrToSTR(std::to_string(data[0].sumForAll));
	label21->Text = sum + " рублей";
}//dataGridViewTable->Rows[1]->DefaultCellStyle->BackColor = Color::Pink;

// КНОПКА ГЕНЕРИРОВАТЬ ОТЧЕТ
System::Void curseFormSQL::AdminForm::buttonGenerateRaport_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (supportForGenerateReport.time_sub == 1) {
		int count = counterData("select COUNT(*) FROM publication, client, subscription WHERE publication.id = subscription.id_publication AND client.id = subscription.id_client AND start_month < 7 AND start_year = " + std::to_string(supportForGenerateReport.start_year));
		if (count != 0)
		{
			GenerateReport* dataReport = new GenerateReport[count];
			raport.search(supportForGenerateReport.time_sub, supportForGenerateReport.start_year, dataReport);
			table_GenerateReport(count, dataReport);
		}
		else MessageBox::Show("В данном моменте времени нет данных для отчета!", "Ошибка!");
	}
	else {
		int count = counterData("select COUNT(*) FROM publication, client, subscription WHERE publication.id = subscription.id_publication AND client.id = subscription.id_client AND start_month > 6 AND start_year = " + std::to_string(supportForGenerateReport.start_year));
		if (count != 0)
		{
			GenerateReport* dataReport = new GenerateReport[count];
			raport.search(supportForGenerateReport.time_sub, supportForGenerateReport.start_year, dataReport);
			table_GenerateReport(count, dataReport);
		}
		else MessageBox::Show("В данном моменте времени нет данных для отчета!", "Ошибка!");
	}
}

System::Void curseFormSQL::AdminForm::dataGridViewTable_CellContentDoubleClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
{
	int row = e->RowIndex;
	if (row >= 0) {
		if (dataGridViewTable->TopLeftHeaderCell->Value == "Список клиентов") {
			String^ code = dataGridViewTable->Rows[row]->Cells[0]->Value->ToString();
			String^ fio = dataGridViewTable->Rows[row]->Cells[1]->Value->ToString();
			String^ address = dataGridViewTable->Rows[row]->Cells[2]->Value->ToString();
			TableClickCode = converterFromStringFormToUtf8(code);
			TableClickFio = converterFromStringFormToUtf8(fio);
			TableClickAddress = converterFromStringFormToUtf8(address);
		}
		else if (dataGridViewTable->TopLeftHeaderCell->Value == "Список подписок") {
			String^ number = dataGridViewTable->Rows[row]->Cells[0]->Value->ToString();
			String^ month = dataGridViewTable->Rows[row]->Cells[5]->Value->ToString();
			String^ year = dataGridViewTable->Rows[row]->Cells[6]->Value->ToString();
			String^ timesub = dataGridViewTable->Rows[row]->Cells[7]->Value->ToString();
			TableClickNumberSub = converterFromStringFormToUtf8(number);
			TableClickMonthSub = stoi(converterFromStringFormToUtf8(month));
			TableClickYearSub = stoi(converterFromStringFormToUtf8(year));
			TableClickTimeSub = stoi(converterFromStringFormToUtf8(timesub));
		}
		else if (dataGridViewTable->TopLeftHeaderCell->Value == "Список изданий") {
			String^ index = dataGridViewTable->Rows[row]->Cells[0]->Value->ToString();
			String^ type = dataGridViewTable->Rows[row]->Cells[1]->Value->ToString();
			String^ name = dataGridViewTable->Rows[row]->Cells[3]->Value->ToString();
			String^ price = dataGridViewTable->Rows[row]->Cells[4]->Value->ToString();
			TableClickIndexBook = converterFromStringFormToUtf8(index);
			TableClickTypeBook = converterFromStringFormToUtf8(type);
			TableClickNameBook = converterFromStringFormToUtf8(name);
			TableClickPriceBook = converterFromStringFormToUtf8(price);
		}
		else if (dataGridViewTable->TopLeftHeaderCell->Value == "Список типов изданий") {
			String^ id = dataGridViewTable->Rows[row]->Cells[0]->Value->ToString();
			String^ nameTypeBook = dataGridViewTable->Rows[row]->Cells[1]->Value->ToString();
			TableClickTypeBookIndex = converterFromStringFormToUtf8(id);
			TableClickTypeBookName = converterFromStringFormToUtf8(nameTypeBook);
		}
		else if (dataGridViewTable->TopLeftHeaderCell->Value == "Список сотрудников") {
			String^ login = dataGridViewTable->Rows[row]->Cells[0]->Value->ToString();
			String^ pass = dataGridViewTable->Rows[row]->Cells[1]->Value->ToString();
			String^ post = dataGridViewTable->Rows[row]->Cells[2]->Value->ToString();
			TableClickLogin = converterFromStringFormToUtf8(login);
			TableClickPassword = converterFromStringFormToUtf8(pass);
			TableClickPost = converterFromStringFormToUtf8(post);
		}
	}
}