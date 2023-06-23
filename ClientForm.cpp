#include "ClientForm.h"

sub_data AddSub;
sub_data searchSubForClientForm;
subscribe class_sub;
Book class_book;
// запускается при открытии формы 
System::Void curseFormSQL::ClientForm::printClient(System::Object^ sender, System::EventArgs^ e)
{
	String^ fio = converterFromstrToSTR(dataClient.FIO);
	String^ address = converterFromstrToSTR(dataClient.address);

	label1->Text = fio;
	label2->Text = address;

	dataGridViewClient->EnableHeadersVisualStyles = false;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// КНОПКА ВЫБОРА СРОКА ПОДПИСКИ ДЛЯ ДОБАВЛЕНИЯ 
System::Void curseFormSQL::ClientForm::listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
	String^ selectedSubTime = listBoxClientSub->SelectedItem->ToString();
	std::string sub_time;
	Convert_String_to_string(selectedSubTime, sub_time);
	char firstletter = sub_time[0];
	int number = firstletter - '0';
	AddSub.time_sub = number;
}

// КНОПКА ВЫБОРА МЕСЯЦА ПОДПИСКИ ДЛЯ ДОБАВЛЕНИЯ
System::Void curseFormSQL::ClientForm::listBox1_SelectedIndexChanged_1(System::Object^ sender, System::EventArgs^ e)
{
	String^ selectedMonth = listBox1->SelectedItem->ToString();
	std::string startMonth;
	Convert_String_to_string(selectedMonth, startMonth);
	int startMonthInt = stoi(startMonth);
	AddSub.start_month = startMonthInt;
}

// КНОПКА ВЫБОРА ГОДА ПОДПИСКИ ДЛЯ ДОБАВЛЕНИЯ
System::Void curseFormSQL::ClientForm::listBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
	String^ selectedYear = listBox2->SelectedItem->ToString();
	std::string startYear;
	Convert_String_to_string(selectedYear, startYear);
	int startYearInt = stoi(startYear);
	AddSub.start_year = startYearInt;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// ШАБЛОН ДЛЯ ТАБЛИЦЫ ПОДПИСОК
System::Void curseFormSQL::ClientForm::table_ClientSub(int count, sub_data* data)
{
	dataGridViewClient->Rows->Clear();;
	dataGridViewClient->Columns->Clear();

	dataGridViewClient->RowCount = count;// количество строк
	dataGridViewClient->ColumnCount = 4;//количество столбцов
	dataGridViewClient->TopLeftHeaderCell->Value = "Мои подписки";//название таблицы
	dataGridViewClient->TopLeftHeaderCell->Style->BackColor = Color::LavenderBlush;

	//название полей стобцов
	dataGridViewClient->Columns[0]->HeaderCell->Value = "Название издания";
	dataGridViewClient->Columns[1]->HeaderCell->Value = "Начальный месяц действия подписки";
	dataGridViewClient->Columns[2]->HeaderCell->Value = "Начальный год действия подписки";
	dataGridViewClient->Columns[3]->HeaderCell->Value = "Срок действия подписки";

	dataGridViewClient->Columns[0]->HeaderCell->Style->BackColor = Color::LavenderBlush;
	dataGridViewClient->Columns[1]->HeaderCell->Style->BackColor = Color::LavenderBlush;
	dataGridViewClient->Columns[2]->HeaderCell->Style->BackColor = Color::LavenderBlush;
	dataGridViewClient->Columns[3]->HeaderCell->Style->BackColor = Color::LavenderBlush;

	dataGridViewClient->Columns[0]->Width = 250;
	dataGridViewClient->Columns[1]->Width = 133;
	dataGridViewClient->Columns[2]->Width = 133;
	dataGridViewClient->Columns[3]->Width = 133;

	for (int j = 0; j < count; j++)
	{
		// разметка строк
		dataGridViewClient->Rows[j]->HeaderCell->Value = Convert::ToString(j + 1);
		String^ nameron = converterFromstrToSTR(data[j].name);
		//Передача значений хэш таблицы при чтении файла в таблицу
		dataGridViewClient->Rows[j]->Cells[0]->Value = gcnew System::String(nameron);
		dataGridViewClient->Rows[j]->Cells[1]->Value = data[j].start_month;
		dataGridViewClient->Rows[j]->Cells[2]->Value = data[j].start_year;
		dataGridViewClient->Rows[j]->Cells[3]->Value = data[j].time_sub;
		if (j % 2 == 0) {
			dataGridViewClient->Rows[j]->DefaultCellStyle->BackColor = Color::Azure;
			dataGridViewClient->Rows[j]->HeaderCell->Style->BackColor = Color::Azure;
		}
		else {
			dataGridViewClient->Rows[j]->DefaultCellStyle->BackColor = Color::LavenderBlush;
			dataGridViewClient->Rows[j]->HeaderCell->Style->BackColor = Color::LavenderBlush;
		}
	}
	dataGridViewClient->RowHeadersWidth = 80;
}

// ПОДПИСКА НА ИЗДАНИЕ
System::Void curseFormSQL::ClientForm::buttonAddSub_Click(System::Object^ sender, System::EventArgs^ e)
{
	std::string bookName = converterFromStringFormToUtf8(textBoxSubName->Text->ToString());
	if (AddSub.start_month != 0 && AddSub.start_year != 0 && AddSub.time_sub != 0) {
		if (checkName(bookName)) {
			try {
				connectToSql();
				try
				{
					res = stmt->executeQuery("SELECT id FROM publication where name = '" + bookName + "'");
					while (res->next()) {
						AddSub.id_publication = res->getInt(1);
					}
					delete res;
					delete stmt;
					class_sub.Add(std::to_string(dataClient.id), std::to_string(AddSub.id_publication), AddSub.start_month, AddSub.start_year, AddSub.time_sub);
				}
				catch (sql::SQLException e)
				{
					MessageBox::Show("Не удалось подписаться на издание! (проверьте входные данные)", "Ошибка!");
				}
			}
			catch (sql::SQLException e) {
				MessageBox::Show("Ошибка подключения к базе данных!", "Ошибка!");
			}
		}
	} else { MessageBox::Show("Вы не выбрали месяц, год и срок!", "Ошибка!"); }
}

// КНОПКА ПОСМОТРЕТЬ СВОИ ПОДПИСКИ
System::Void curseFormSQL::ClientForm::buttonCheckSub_Click(System::Object^ sender, System::EventArgs^ e)
{
	std::string cod = std::to_string(dataClient.id);
	int count = counterData("SELECT COUNT(*) FROM subscription, publication WHERE publication.id = subscription.id_publication AND subscription.id_client  = " + cod);
	if (count != 0)
	{
		sub_data* dataSub = new sub_data[count];
		class_sub.searchForClientForm("SELECT name, start_month, start_year, time_sub FROM subscription, publication WHERE publication.id = subscription.id_publication AND subscription.id_client  = " + cod, dataSub);
		table_ClientSub(count, dataSub);
	}
	else MessageBox::Show("Список ваших подписок пуст!", "Ошибка!");
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// ШАБЛОН ТАБЛИЦЫ ДЛЯ ИЗДАНИЙ
System::Void curseFormSQL::ClientForm::table_ClientBook(int count, book_data* data)
{
	dataGridViewClient->Rows->Clear();;
	dataGridViewClient->Columns->Clear();

	dataGridViewClient->RowCount = count;// количество строк
	dataGridViewClient->ColumnCount = 3;//количество столбцов
	dataGridViewClient->TopLeftHeaderCell->Value = "Каталог изданий";//название таблицы
	dataGridViewClient->TopLeftHeaderCell->Style->BackColor = Color::LavenderBlush;

	//название полей стобцов
	dataGridViewClient->Columns[0]->HeaderCell->Value = "Название издания";
	dataGridViewClient->Columns[1]->HeaderCell->Value = "Тип издания";
	dataGridViewClient->Columns[2]->HeaderCell->Value = "Цена";

	dataGridViewClient->Columns[0]->HeaderCell->Style->BackColor = Color::LavenderBlush;
	dataGridViewClient->Columns[1]->HeaderCell->Style->BackColor = Color::LavenderBlush;
	dataGridViewClient->Columns[2]->HeaderCell->Style->BackColor = Color::LavenderBlush;

	dataGridViewClient->Columns[0]->Width = 350;
	dataGridViewClient->Columns[1]->Width = 200;
	dataGridViewClient->Columns[2]->Width = 100;


	for (int j = 0; j < count; j++)
	{
		// разметка строк
		dataGridViewClient->Rows[j]->HeaderCell->Value = Convert::ToString(j + 1);
		String^ nameron = converterFromstrToSTR(data[j].name);
		String^ tip = converterFromstrToSTR(data[j].nameTypeBook);
		//Передача значений хэш таблицы при чтении файла в таблицу
		dataGridViewClient->Rows[j]->Cells[0]->Value = gcnew System::String(nameron);
		dataGridViewClient->Rows[j]->Cells[1]->Value = gcnew System::String(tip);
		dataGridViewClient->Rows[j]->Cells[2]->Value = data[j].price;
		if (j % 2 == 0) {
			dataGridViewClient->Rows[j]->DefaultCellStyle->BackColor = Color::Azure;
			dataGridViewClient->Rows[j]->HeaderCell->Style->BackColor = Color::Azure;
		}
		else {
			dataGridViewClient->Rows[j]->DefaultCellStyle->BackColor = Color::LavenderBlush;
			dataGridViewClient->Rows[j]->HeaderCell->Style->BackColor = Color::LavenderBlush;
		}
	}
	dataGridViewClient->RowHeadersWidth = 80;
}

// КНОПКА ПОСМОТРЕТЬ ВСЕ ИЗДАНИЯ
System::Void curseFormSQL::ClientForm::buttonCheckBook_Click(System::Object^ sender, System::EventArgs^ e)
{
	int count = counterData("SELECT count(*) FROM publication, type_publication WHERE publication.id_type = type_publication.id");
	if (count != 0)
	{
		book_data* dataBook = new book_data[count];
		class_book.searchForClientForm("SELECT name, tip, price FROM publication, type_publication WHERE publication.id_type = type_publication.id", dataBook);
		table_ClientBook(count, dataBook);
	}
	else MessageBox::Show("Список изданий пуст!", "Ошибка!");

}

// Выход из формы обратно в меинформ
System::Void curseFormSQL::ClientForm::выйтиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Close();
	MainForm^ form = gcnew MainForm(); // Создание формы
	form->Show();
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// КНОПКА ВЫБОРА МЕСЯЦА ПОДПИСКИ ДЛЯ ПОИСКА 
System::Void curseFormSQL::ClientForm::listBox3_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
	String^ selectedMonth = listBox3->SelectedItem->ToString();
	std::string startMonth;
	Convert_String_to_string(selectedMonth, startMonth);
	int startMonthInt = stoi(startMonth);
	searchSubForClientForm.start_month = startMonthInt;
}

// КНОПКА ВЫБОРА ГОДА ПОДПИСКИ ДЛЯ ПОИСКА
System::Void curseFormSQL::ClientForm::listBox4_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
	String^ selectedYear = listBox4->SelectedItem->ToString();
	std::string startYear;
	Convert_String_to_string(selectedYear, startYear);
	int startYearInt = stoi(startYear);
	searchSubForClientForm.start_year = startYearInt;
}

// КНОПКА ВЫБОРА СРОКА ПОДПИСКИ ДЛЯ ПОИСКА
System::Void curseFormSQL::ClientForm::listBox5_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
	String^ selectedSubTime = listBox5->SelectedItem->ToString();
	std::string sub_time;
	Convert_String_to_string(selectedSubTime, sub_time);
	char firstletter = sub_time[0];
	int number = firstletter - '0';
	searchSubForClientForm.time_sub = number;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// КНОПКА ПОИСКА ИЗДАНИЯ ПО НАЗВАНИЮ
System::Void curseFormSQL::ClientForm::buttonSearchNameBook_Click(System::Object^ sender, System::EventArgs^ e)
{
	std::string name = converterFromStringFormToUtf8(textBoxSearchNameBook->Text->ToString());
	if (checkName(name)) {
		int countName = counterData("SELECT COUNT(*) FROM publication where name = '" + name + "'");
		if (countName != 0)
		{
			book_data* dataBook = new book_data[countName];
			class_book.searchForClientForm("SELECT name, tip, price FROM publication, type_publication WHERE publication.id_type = type_publication.id AND name = '" + name + "'", dataBook);
			table_ClientBook(countName, dataBook);
		}
		else MessageBox::Show("Издания с таким названием нет!", "Ошибка!");
	}
}

// КНОПКА ПОИСКА ИЗДАНИЯ ПО ТИПУ ИЗДАНИЯ
System::Void curseFormSQL::ClientForm::buttonSearchTypeBook_Click(System::Object^ sender, System::EventArgs^ e)
{
	
	std::string tip = converterFromStringFormToUtf8(textBoxSearchTypeBook->Text->ToString());
	if (checkName(tip)) {
		int count = counterData("SELECT COUNT(*) FROM publication, type_publication WHERE publication.id_type = type_publication.id AND tip = '" + tip + "'");
		if (count != 0)
		{
			book_data* dataBook = new book_data[count];
			class_book.searchForClientForm("SELECT name, tip, price FROM publication, type_publication WHERE publication.id_type = type_publication.id AND tip = '" + tip + "'", dataBook);
			table_ClientBook(count, dataBook);
		}
		else MessageBox::Show("Изданий с таким типом нет!", "Ошибка!");
	}
}

// КНОПКА ПОИСКА ИЗДАНИЯ ПО ЦЕНЕ 
System::Void curseFormSQL::ClientForm::buttonSearchPriceBook_Click(System::Object^ sender, System::EventArgs^ e)
{
	std::string price;
	Convert_String_to_string(textBoxSearchPriceBook->Text->ToString(), price);
	if (checkId(price)) {
		int count = counterData("SELECT COUNT(*) FROM publication where price <= " + price);
		if (count != 0)
		{
			book_data* dataBook = new book_data[count];
			class_book.searchForClientForm("SELECT name, tip, price FROM publication, type_publication WHERE publication.id_type = type_publication.id AND  price <= " + price, dataBook);
			table_ClientBook(count, dataBook);
		}
		else MessageBox::Show("Изданий с такой стоимостью нет!", "Ошибка!");
	}
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// КНОПКА ПОИСКА СВОЕЙ ПОДПИСКИ ПО НАЗВАНИЮ ИЗДАНИЯ
System::Void curseFormSQL::ClientForm::buttonSearchNameSub_Click(System::Object^ sender, System::EventArgs^ e)
{
	std::string name = converterFromStringFormToUtf8(textBoxSearchNameSub->Text->ToString());
	if (checkName(name)) {
		int count = counterData("SELECT COUNT(*) FROM subscription, publication WHERE publication.id = subscription.id_publication AND id_client  = " + std::to_string(dataClient.id) + " AND publication.name = '" + name + "'");
		if (count != 0)
		{
			sub_data* dataSub = new sub_data[count];
			class_sub.searchForClientForm("SELECT name, start_month, start_year, time_sub FROM subscription, publication WHERE publication.id = subscription.id_publication AND id_client  = " + std::to_string(dataClient.id) + " AND publication.name = '" + name + "'", dataSub);
			table_ClientSub(count, dataSub);
		}
		else MessageBox::Show("Подписки с таким названием нет!", "Ошибка!");
	}
}

// КНОПКА ПОИСКА СВОЕЙ ПОДПИСКИ ПО МЕСЯЦУ
System::Void curseFormSQL::ClientForm::buttonSearchMonthSub_Click(System::Object^ sender, System::EventArgs^ e)
{
	int count = counterData("SELECT COUNT(*) FROM subscription, publication WHERE publication.id = subscription.id_publication AND id_client  = " + std::to_string(dataClient.id) + " AND subscription.start_month = " + std::to_string(searchSubForClientForm.start_month));
	if (count != 0)
	{
		sub_data* dataSub = new sub_data[count];
		class_sub.searchForClientForm("SELECT name, start_month, start_year, time_sub FROM subscription, publication WHERE publication.id = subscription.id_publication AND id_client  = " + std::to_string(dataClient.id) + " AND subscription.start_month = " + std::to_string(searchSubForClientForm.start_month), dataSub);
		table_ClientSub(count, dataSub);
	}
	else MessageBox::Show("Подписки с таким начальным месяцем нет!", "Ошибка!");
}

// КНОПКА ПОИСКА СВОЕЙ ПОДПИСКИ ПО ГОДУ
System::Void curseFormSQL::ClientForm::buttonSearchYearSub_Click(System::Object^ sender, System::EventArgs^ e)
{
	int count = counterData("SELECT COUNT(*) FROM subscription, publication WHERE publication.id = subscription.id_publication AND id_client  = " + std::to_string(dataClient.id) + " AND subscription.start_year = " + std::to_string(searchSubForClientForm.start_year));
	if (count != 0)
	{
		sub_data* dataSub = new sub_data[count];
		class_sub.searchForClientForm("SELECT name, start_month, start_year, time_sub FROM subscription, publication WHERE publication.id = subscription.id_publication AND id_client  = " + std::to_string(dataClient.id) + " AND subscription.start_year = " + std::to_string(searchSubForClientForm.start_year), dataSub);
		table_ClientSub(count, dataSub);
	}
	else MessageBox::Show("Подписки с таким начальным годом нет!", "Ошибка!");
}

// КНОПКА ПОИСКА СВОЕЙ ПОДПИСКИ ПО СРОКУ
System::Void curseFormSQL::ClientForm::buttonSearchTimeSub_Click(System::Object^ sender, System::EventArgs^ e)
{
	int count = counterData("SELECT COUNT(*) FROM subscription, publication WHERE publication.id = subscription.id_publication AND id_client  = " + std::to_string(dataClient.id) + " AND subscription.time_sub = " + std::to_string(searchSubForClientForm.time_sub));
	if (count != 0)
	{
		sub_data* dataSub = new sub_data[count];
		class_sub.searchForClientForm("SELECT name, start_month, start_year, time_sub FROM subscription, publication WHERE publication.id = subscription.id_publication AND id_client  = " + std::to_string(dataClient.id) + " AND subscription.time_sub = " + std::to_string(searchSubForClientForm.time_sub), dataSub);
		table_ClientSub(count, dataSub);
	}
	else MessageBox::Show("Подписки с таким сроком действия нет!", "Ошибка!");
}

// ОБРАБОТЧИК НАЖАТИЯ НА ЯЧЕЙКУ ТАБЛИЦЫ
System::Void curseFormSQL::ClientForm::dataGridViewClient_CellContentDoubleClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
{
	if (dataGridViewClient->TopLeftHeaderCell->Value == "Каталог изданий") {
		int row = e->RowIndex;
		if (row >= 0) {
			textBoxSubName->Text = dataGridViewClient->Rows[row]->Cells[0]->Value->ToString();
		}
	}
}
