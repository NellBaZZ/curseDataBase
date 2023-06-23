#include "RedactSub.h"

sub_data suber;
subscribe sub;
Client classClientForRedactSub;
sub_data* data = new sub_data[1];
std::vector<std::vector<std::string>> massivSub = std::vector<std::vector<std::string>>();

System::Void curseFormSQL::RedactSub::printFirst(System::Object^ sender, System::EventArgs^ e)
{
	int count = counterData("SELECT COUNT(*) FROM subscription where id_client = " + std::to_string(minimumOneSubClient));
	String^ message = converterFromstrToSTR(std::to_string(minimumOneSubClient));
	if (count < 1)
	{
		MessageBox::Show("Добавьте хотя бы 1 подписку для клиента с кодом '" + message + "'", "Внимание!");
		textBoxCode->Text = message;
	}

	textBoxNumberSub->Text = converterFromstrToSTR(TableClickNumberSub);
	if (TableClickMonthSub != 0) {
		suber.start_month = TableClickMonthSub;
		suber.start_year = TableClickYearSub;
		suber.time_sub = TableClickTimeSub;
	}
}

// ВЫБОР МЕСЯЦА НАЧАЛА ДЕЙСТВИЯ ПОДПИСКИ
System::Void curseFormSQL::RedactSub::listBoxMonth_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
	String^ selectedSubMonth = listBoxMonth->SelectedItem->ToString();
	std::string start_month;
	Convert_String_to_string(selectedSubMonth, start_month);
	suber.start_month = stoi(start_month);
}

// ВЫБОР ГОДА НАЧАЛА ДЕЙСТВИЯ ПОДПИСКИ
System::Void curseFormSQL::RedactSub::listBoxYear_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
	String^ selectedSubYear = listBoxYear->SelectedItem->ToString();
	std::string start_year;
	Convert_String_to_string(selectedSubYear, start_year);
	suber.start_year = stoi(start_year);
}

// ВЫБОР СРОКА ДЕЙСТВИЯ ПОДПИСКИ
System::Void curseFormSQL::RedactSub::listBoxSrok_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
	String^ selectedSubTime = listBoxSrok->SelectedItem->ToString();
	std::string sub_time;
	Convert_String_to_string(selectedSubTime, sub_time);
	char firstletter = sub_time[0];
	int number = firstletter - '0';
	suber.time_sub = number;
}

// КНОПКА РЕДАКТИРОВАНИЯ ПОДПИСКИ
System::Void curseFormSQL::RedactSub::buttonRedact_Click(System::Object^ sender, System::EventArgs^ e)
{
	std::string id;
	Convert_String_to_string(textBoxNumberSub->Text->ToString(), id);

	if (suber.start_month != 0 && suber.start_year != 0 && suber.time_sub != 0) {
		int count = counterData("SELECT COUNT(*) FROM subscription where id = " + id);
		if (count != 0) {
			sub.search("SELECT subscription.id, id_publication, name, id_client, FIO, start_month, start_year, time_sub FROM subscription, publication, client WHERE publication.id = subscription.id_publication AND client.id = subscription.id_client AND subscription.id = " + id, data);
			std::vector<std::string> list = std::vector<std::string>();
			list.push_back(id);
			list.push_back(std::to_string(data[0].start_month));
			list.push_back(std::to_string(data[0].start_year));
			list.push_back(std::to_string(data[0].time_sub));
			massivSub.push_back(list);

			sub.redact(id, suber.start_month, suber.start_year, suber.time_sub);
		}
		else { MessageBox::Show("Такой записи нет!", "Ошибка!"); }
	}
	else { MessageBox::Show("Поля месяца, года или срока пустые!", "Ошибка!"); }
}

// КНОПКА УДАЛЕНИЯ ПОДПИСКИ
System::Void curseFormSQL::RedactSub::buttonDelete_Click(System::Object^ sender, System::EventArgs^ e)
{
	std::string number;
	Convert_String_to_string(textBoxNumberSub->Text->ToString(), number);
	sub.Delete(number);
}

// КНОПКА ДОБАВЛЕНИЯ ПОДПИСКИ
System::Void curseFormSQL::RedactSub::buttonAdd_Click(System::Object^ sender, System::EventArgs^ e)
{
	std::string code;
	Convert_String_to_string(textBoxCode->Text->ToString(), code);
	std::string index;
	Convert_String_to_string(textBoxIndex->Text->ToString(), index);
	if (suber.start_month != 0 && suber.start_year != 0 && suber.time_sub != 0) {
		sub.Add(code, index, suber.start_month, suber.start_year, suber.time_sub);
	} else { MessageBox::Show("Поля месяца, года или срока пустые!", "Ошибка!"); }
}

// кнопка выйти из окна редактирования
System::Void curseFormSQL::RedactSub::закрытьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	int count = counterData("SELECT COUNT(*) FROM subscription where id_client = " + std::to_string(minimumOneSubClient));
	String^ message = converterFromstrToSTR(std::to_string(minimumOneSubClient));
	if (count < 1)
	{
		MessageBox::Show("Добавьте хотя бы 1 подписку для клиента с кодом '" + message + "'", "Внимание!");
		textBoxCode->Text = message;
		auto result = MessageBox::Show("Если вы передумали добавлять клиента, то нажмите 'Да'", "Внимание!",MessageBoxButtons::YesNo);
		if (result == System::Windows::Forms::DialogResult::Yes)
		{
			classClientForRedactSub.Delete(std::to_string(minimumOneSubClient));
			minimumOneSubClient = 1;
			this->Close();
		}
	}
	else { 
		minimumOneSubClient = 1;
		this->Close(); 
	}
}

System::Void curseFormSQL::RedactSub::обновитьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	textBoxNumberSub->Text = converterFromstrToSTR(TableClickNumberSub);
	if (TableClickMonthSub != 0) {
		suber.start_month = TableClickMonthSub;
		suber.start_year = TableClickYearSub;
		suber.time_sub = TableClickTimeSub;
	}
}

System::Void curseFormSQL::RedactSub::отменитьИзменениеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	for (int i = 0; i < massivSub.size(); i++)
	{
		sub.redact(massivSub[i][0], stoi(massivSub[i][1]), stoi(massivSub[i][2]), stoi(massivSub[i][3]));
	}
	massivSub.clear();
}
