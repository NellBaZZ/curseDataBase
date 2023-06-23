#include "OperatorForm.h"
#include "RedactClient.h"
#include "RedactSub.h"

Book class_Book;
Client class_Client;
subscribe class_Subscribe;
sub_data searchSubForOperatorForm;


// ВЫПОЛНЯЕТСЯ ПРИ ЗАПУСКЕ ФОРМЫ
System::Void curseFormSQL::OperatorForm::OperatorForm_Load(System::Object^ sender, System::EventArgs^ e)
{

	String^ login = converterFromstrToSTR(workerData.login);
	String^ post = converterFromstrToSTR(workerData.post);
	dataGridViewTable->EnableHeadersVisualStyles = false;

	labelLogin->Text = login;
	labelPost->Text = post;
}

// ПЕРЕХОД В ФОРМУ РЕДАКТИРОВАНИЕ КЛИЕНТА
System::Void curseFormSQL::OperatorForm::buttonRedactClient_Click(System::Object^ sender, System::EventArgs^ e)
{
	RedactClient^ form = gcnew RedactClient();
	form->Show();
}

// ПЕРЕХОД В ФОРМУ РЕДАКТИРОВАНИЕ ПОДПИСКИ
System::Void curseFormSQL::OperatorForm::buttonRedactSub_Click(System::Object^ sender, System::EventArgs^ e)
{
	RedactSub^ form = gcnew RedactSub();
	form->Show();
}

// ШАБЛОН ТАБЛИЦЫ ДЛЯ ИЗДАНИЯ
System::Void curseFormSQL::OperatorForm::table_OperatorBook(int count, book_data* data)
{
	dataGridViewTable->Rows->Clear();;
	dataGridViewTable->Columns->Clear();

	dataGridViewTable->RowCount = count;// количество строк
	dataGridViewTable->ColumnCount = 4;//количество столбцов
	dataGridViewTable->TopLeftHeaderCell->Value = "Список изданий";//название таблицы
	dataGridViewTable->TopLeftHeaderCell->Style->BackColor = Color::LavenderBlush;

	//название полей стобцов
	dataGridViewTable->Columns[0]->HeaderCell->Value = "Индекс издания";
	dataGridViewTable->Columns[1]->HeaderCell->Value = "Тип издания";
	dataGridViewTable->Columns[2]->HeaderCell->Value = "Название издания";
	dataGridViewTable->Columns[3]->HeaderCell->Value = "Цена издания";

	dataGridViewTable->Columns[0]->HeaderCell->Style->BackColor = Color::LavenderBlush;
	dataGridViewTable->Columns[1]->HeaderCell->Style->BackColor = Color::LavenderBlush;
	dataGridViewTable->Columns[2]->HeaderCell->Style->BackColor = Color::LavenderBlush;
	dataGridViewTable->Columns[3]->HeaderCell->Style->BackColor = Color::LavenderBlush;

	dataGridViewTable->Columns[0]->Width = 100;
	dataGridViewTable->Columns[1]->Width = 320;
	dataGridViewTable->Columns[2]->Width = 320;
	dataGridViewTable->Columns[3]->Width = 150;

	for (int j = 0; j < count; j++)
	{
		// разметка строк
		dataGridViewTable->Rows[j]->HeaderCell->Value = Convert::ToString(j + 1);
		String^ nameron = converterFromstrToSTR(data[j].name);
		String^ nameTypeBook = converterFromstrToSTR(data[j].nameTypeBook);
		//Передача значений хэш таблицы при чтении файла в таблицу
		dataGridViewTable->Rows[j]->Cells[0]->Value = data[j].index;
		dataGridViewTable->Rows[j]->Cells[1]->Value = gcnew System::String(nameTypeBook);
		dataGridViewTable->Rows[j]->Cells[2]->Value = gcnew System::String(nameron);
		dataGridViewTable->Rows[j]->Cells[3]->Value = data[j].price;
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

// КНОПКА ПОСМОТРЕТЬ ВСЕ ИЗДАНИЯ
System::Void curseFormSQL::OperatorForm::buttonCheckBook_Click(System::Object^ sender, System::EventArgs^ e)
{
	int countBook = counterData("SELECT COUNT(*) FROM publication");
	if (countBook != 0)
	{
		book_data* dataBook = new book_data[countBook];
		class_Book.search("SELECT publication.id, id_type, tip, name, price FROM publication, type_publication WHERE publication.id_type = type_publication.id", dataBook);
		table_OperatorBook(countBook, dataBook);
	}
	else MessageBox::Show("Список изданий пуст!", "Ошибка!");
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// ШАБЛОН ТАБЛИЦЫ ДЛЯ КЛИЕНТОВ
System::Void curseFormSQL::OperatorForm::table_OperatorClient(int count, client_data* data)
{
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
	dataGridViewTable->Columns[2]->Width = 395;

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
System::Void curseFormSQL::OperatorForm::buttonCheckClient_Click(System::Object^ sender, System::EventArgs^ e)
{
	int countClient = counterData("SELECT COUNT(*) FROM client");
	if (countClient != 0)
	{
		client_data* dataClient = new client_data[countClient];
		class_Client.search("SELECT * FROM client", dataClient);
		table_OperatorClient(countClient, dataClient);
	}
	else MessageBox::Show("Список клиентов пуст!", "Ошибка!");
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// ШАБЛОН ДЛЯ ТАБЛИЦЫ ДЛЯ ПОДПИСОК
System::Void curseFormSQL::OperatorForm::table_OperatorSub(int count, sub_data* data)
{
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
System::Void curseFormSQL::OperatorForm::buttonCheckSub_Click(System::Object^ sender, System::EventArgs^ e)
{
	int count = counterData("SELECT COUNT(*) FROM subscription, publication, client WHERE publication.id = subscription.id_publication AND client.id  = subscription.id_client");
	if (count != 0)
	{
		sub_data* dataSub = new sub_data[count];
		class_Subscribe.search("SELECT subscription.id, id_publication, name, id_client, FIO, start_month, start_year, time_sub FROM subscription, publication, client WHERE publication.id = subscription.id_publication AND client.id  = subscription.id_client", dataSub);
		table_OperatorSub(count, dataSub);
	}
	else MessageBox::Show("Список подписок пуст!", "Ошибка!");
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// КНОПКИ ПОИСКА ИЗДАНИЯ
System::Void curseFormSQL::OperatorForm::buttonSearchIndexBook_Click(System::Object^ sender, System::EventArgs^ e)
{
	std::string ind;
	Convert_String_to_string(textBoxIndexBook->Text->ToString(), ind);
	if (checkId(ind)) {
		int count = counterData("SELECT COUNT(*) FROM publication where id = " + ind);
		if (count != 0)
		{
			book_data* dataBook = new book_data[count];
			class_Book.search("SELECT publication.id, id_type, tip, name, price FROM publication, type_publication WHERE publication.id_type = type_publication.id and publication.id = " + ind, dataBook);
			table_OperatorBook(count, dataBook);
		}
		else MessageBox::Show("Издания с таким индексом нет!", "Ошибка!");
	}
}

System::Void curseFormSQL::OperatorForm::buttonSearchNameBook_Click(System::Object^ sender, System::EventArgs^ e)
{
	std::string name = converterFromStringFormToUtf8(textBoxNameBook->Text->ToString());
	if (checkName(name)) {
		int countName = counterData("SELECT COUNT(*) FROM publication where name = '" + name + "'");
		if (countName != 0)
		{
			book_data* dataBook = new book_data[countName];
			class_Book.search("SELECT publication.id, id_type, tip, name, price FROM publication, type_publication WHERE publication.id_type = type_publication.id and name = '" + name + "'", dataBook);
			table_OperatorBook(countName, dataBook);
		}
		else MessageBox::Show("Издания с таким названием нет!", "Ошибка!");
	}
}

System::Void curseFormSQL::OperatorForm::buttonSearchTypeBook_Click(System::Object^ sender, System::EventArgs^ e)
{
	std::string tip = converterFromStringFormToUtf8(textBoxTypeBook->Text->ToString());
	if (checkName(tip)) {
		int count = counterData("SELECT COUNT(*) FROM publication, type_publication WHERE publication.id_type = type_publication.id AND tip = '" + tip + "'");
		if (count != 0)
		{
			book_data* dataBook = new book_data[count];
			class_Book.searchForClientForm("SELECT name, tip, price FROM publication, type_publication WHERE publication.id_type = type_publication.id AND tip = '" + tip + "'", dataBook);
			table_OperatorBook(count, dataBook);
		}
		else MessageBox::Show("Изданий с таким типом нет!", "Ошибка!");
	}
}

System::Void curseFormSQL::OperatorForm::buttonSearchPriceBook_Click(System::Object^ sender, System::EventArgs^ e)
{
	std::string price;
	Convert_String_to_string(textBoxPriceBook->Text->ToString(), price);
	if (checkId(price)) {
		int count = counterData("SELECT COUNT(*) FROM publication where price <= " + price);
		if (count != 0)
		{
			book_data* dataBook = new book_data[count];
			class_Book.search("SELECT publication.id, id_type, tip, name, price FROM publication, type_publication WHERE publication.id_type = type_publication.id and price <= " + price, dataBook);
			table_OperatorBook(count, dataBook);
		}
		else MessageBox::Show("Изданий с такой стоимостью нет!", "Ошибка!");
	}
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// КНОПКИ ПОИСКА КЛИЕНТА
System::Void curseFormSQL::OperatorForm::buttonSearchClient_Click(System::Object^ sender, System::EventArgs^ e)
{
	std::string code;
	Convert_String_to_string(textBoxCodeClient->Text->ToString(), code);
	if (checkId(code)) {
		int count = counterData("SELECT COUNT(*) FROM client where id = " + code);
		if (count != 0)
		{
			client_data* dataCLient = new client_data[count];
			class_Client.search("SELECT * FROM client WHERE id = " + code, dataCLient);
			table_OperatorClient(count, dataCLient);
		}
		else MessageBox::Show("Клиента с таким кодом нет!", "Ошибка!");
	}
}

System::Void curseFormSQL::OperatorForm::buttonSearchFIOClient_Click(System::Object^ sender, System::EventArgs^ e)
{
	std::string FIO = converterFromStringFormToUtf8(textBoxFIOClient->Text->ToString());
	if (class_Client.checkFIO(FIO)) {
		int count = counterData("SELECT COUNT(*) FROM client where FIO = '" + FIO + "'");
		if (count != 0)
		{
			client_data* dataCLient = new client_data[count];
			class_Client.search("SELECT * FROM client WHERE FIO = '" + FIO + "'", dataCLient);
			table_OperatorClient(count, dataCLient);
		}
		else MessageBox::Show("Клиента с таким ФИО нет!!", "Ошибка!");
	}
}

System::Void curseFormSQL::OperatorForm::buttonSearchAddressClient_Click(System::Object^ sender, System::EventArgs^ e)
{
	std::string address = converterFromStringFormToUtf8(textBoxAddressClient->Text->ToString());
	if (class_Client.checkAddress(address)){
		int count = counterData("SELECT COUNT(*) FROM client where address = '" + address + "'");
		if (count != 0)
		{
			client_data* dataCLient = new client_data[count];
			class_Client.search("SELECT * FROM client WHERE address = '" + address + "'", dataCLient);
			table_OperatorClient(count, dataCLient);
		}
		else MessageBox::Show("Клиента с таким адресом нет!", "Ошибка!");
	}
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// ВЫБОР МЕСЯЦА ГОДА И СРОКА 
System::Void curseFormSQL::OperatorForm::listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
	String^ selectedMonth = listBox1->SelectedItem->ToString();
	std::string startMonth;
	Convert_String_to_string(selectedMonth, startMonth);
	int startMonthInt = stoi(startMonth);
	searchSubForOperatorForm.start_month = startMonthInt;
}

System::Void curseFormSQL::OperatorForm::listBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
	String^ selectedYear = listBox2->SelectedItem->ToString();
	std::string startYear;
	Convert_String_to_string(selectedYear, startYear);
	int startYearInt = stoi(startYear);
	searchSubForOperatorForm.start_year = startYearInt;
}

System::Void curseFormSQL::OperatorForm::listBox3_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
	String^ selectedSubTime = listBox3->SelectedItem->ToString();
	std::string sub_time;
	Convert_String_to_string(selectedSubTime, sub_time);
	char firstletter = sub_time[0];
	int number = firstletter - '0';
	searchSubForOperatorForm.time_sub = number;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// КНОПКИ ДЛЯ ПОИСКА ПОДПИСКИ
System::Void curseFormSQL::OperatorForm::buttonSearchSub_Click(System::Object^ sender, System::EventArgs^ e)
{
	std::string number;
	Convert_String_to_string(textBoxNumberSub->Text->ToString(), number);
	if (checkId(number)) {
		int count = counterData("SELECT COUNT(*) FROM subscription, publication, client WHERE publication.id = subscription.id_publication AND client.id  = subscription.id_client AND subscription.id = " + number);
		if (count != 0)
		{
			sub_data* dataSub = new sub_data[count];
			class_Subscribe.search("SELECT subscription.id, id_publication, name, id_client, FIO, start_month, start_year, time_sub FROM subscription, publication, client WHERE publication.id = subscription.id_publication AND client.id  = subscription.id_client AND subscription.id = " + number, dataSub);
			table_OperatorSub(count, dataSub);
		}
		else MessageBox::Show("Подписки с таким номером нет!", "Ошибка!");
	}
}

System::Void curseFormSQL::OperatorForm::buttonSearchIndexSub_Click(System::Object^ sender, System::EventArgs^ e)
{
	std::string index;
	Convert_String_to_string(textBoxIndexSub->Text->ToString(), index);
	if (checkId(index)) {
		int count = counterData("SELECT COUNT(*) FROM subscription, publication, client WHERE publication.id = subscription.id_publication AND client.id  = subscription.id_client AND subscription.id_publication = " + index);
		if (count != 0)
		{
			sub_data* dataSub = new sub_data[count];
			class_Subscribe.search("SELECT subscription.id, id_publication, name, id_client, FIO, start_month, start_year, time_sub FROM subscription, publication, client WHERE publication.id = subscription.id_publication AND client.id  = subscription.id_client AND subscription.id_publication = " + index, dataSub);
			table_OperatorSub(count, dataSub);
		}
		else MessageBox::Show("Подписки с таким индексом издания нет!", "Ошибка!");
	}
}

System::Void curseFormSQL::OperatorForm::buttonSearchCodeSub_Click(System::Object^ sender, System::EventArgs^ e)
{
	std::string code;
	Convert_String_to_string(textBoxCodeSub->Text->ToString(), code);
	if (checkId(code)) {
		int count = counterData("SELECT COUNT(*) FROM subscription, publication, client WHERE publication.id = subscription.id_publication AND client.id  = subscription.id_client AND subscription.id_client = " + code);
		if (count != 0)
		{
			sub_data* dataSub = new sub_data[count];
			class_Subscribe.search("SELECT subscription.id, id_publication, name, id_client, FIO, start_month, start_year, time_sub FROM subscription, publication, client WHERE publication.id = subscription.id_publication AND client.id  = subscription.id_client AND subscription.id_client = " + code, dataSub);
			table_OperatorSub(count, dataSub);
		}
		else MessageBox::Show("Подписки с таким кодом клиента нет!", "Ошибка!");
	}
}

System::Void curseFormSQL::OperatorForm::buttonSearchMonthSub_Click(System::Object^ sender, System::EventArgs^ e)
{
	int count = counterData("SELECT COUNT(*) FROM subscription, publication, client WHERE publication.id = subscription.id_publication AND client.id  = subscription.id_client AND subscription.start_month = " + std::to_string(searchSubForOperatorForm.start_month));
	if (count != 0)
	{
		sub_data* dataSub = new sub_data[count];
		class_Subscribe.search("SELECT subscription.id, id_publication, name, id_client, FIO, start_month, start_year, time_sub FROM subscription, publication, client WHERE publication.id = subscription.id_publication AND client.id  = subscription.id_client AND subscription.start_month = " + std::to_string(searchSubForOperatorForm.start_month), dataSub);
		table_OperatorSub(count, dataSub);
	}
	else MessageBox::Show("Подписки с таким месяцем начала действия нет!", "Ошибка!");
}

System::Void curseFormSQL::OperatorForm::buttonSearchYearSub_Click(System::Object^ sender, System::EventArgs^ e)
{
	int count = counterData("SELECT COUNT(*) FROM subscription, publication, client WHERE publication.id = subscription.id_publication AND client.id  = subscription.id_client AND subscription.start_year = " + std::to_string(searchSubForOperatorForm.start_year));
	if (count != 0)
	{
		sub_data* dataSub = new sub_data[count];
		class_Subscribe.search("SELECT subscription.id, id_publication, name, id_client, FIO, start_month, start_year, time_sub FROM subscription, publication, client WHERE publication.id = subscription.id_publication AND client.id  = subscription.id_client AND subscription.start_year = " + std::to_string(searchSubForOperatorForm.start_year), dataSub);
		table_OperatorSub(count, dataSub);
	}
	else MessageBox::Show("Подписки с таким годом начала действия нет!", "Ошибка!");
}

System::Void curseFormSQL::OperatorForm::buttonSearchTimeSub_Click(System::Object^ sender, System::EventArgs^ e)
{
	int count = counterData("SELECT COUNT(*) FROM subscription, publication, client WHERE publication.id = subscription.id_publication AND client.id  = subscription.id_client AND subscription.time_sub = " + std::to_string(searchSubForOperatorForm.time_sub));
	if (count != 0)
	{
		sub_data* dataSub = new sub_data[count];
		class_Subscribe.search("SELECT subscription.id, id_publication, name, id_client, FIO, start_month, start_year, time_sub FROM subscription, publication, client WHERE publication.id = subscription.id_publication AND client.id  = subscription.id_client AND subscription.time_sub = " + std::to_string(searchSubForOperatorForm.time_sub), dataSub);
		table_OperatorSub(count, dataSub);
	}
	else MessageBox::Show("Подписки с таким сроком действия нет!", "Ошибка!");
}

// ОБРАБОТЧИК НАЖАТИЯ НА ЯЧЕЙКУ ТАБЛИЦЫ
System::Void curseFormSQL::OperatorForm::dataGridViewTable_CellContentDoubleClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
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
	}
}


// ВЫЙТИ ОБРАТНО В МЕИНФОРМ
System::Void curseFormSQL::OperatorForm::выйтиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	TableClickCode = "";
	TableClickFio = "";
	TableClickAddress = "";
	TableClickNumberSub = "";
	TableClickMonthSub = 0;
	TableClickYearSub = 0;
	TableClickTimeSub = 0;
	this->Close();
	MainForm^ form = gcnew MainForm(); // Создание формы
	form->Show();
}