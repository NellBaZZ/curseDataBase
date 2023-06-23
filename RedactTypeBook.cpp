#include "RedactTypeBook.h"
typeBook type;

typeBook_data* data = new typeBook_data[1];
std::vector<std::vector<std::string>> massivTypeBook = std::vector<std::vector<std::string>>();

System::Void curseFormSQL::RedactTypeBook::buttonAdd_Click(System::Object^ sender, System::EventArgs^ e)
{
    std::string tip = converterFromStringFormToUtf8(textBoxName->Text->ToString());
    type.Add(tip);
}

System::Void curseFormSQL::RedactTypeBook::buttonRedact_Click(System::Object^ sender, System::EventArgs^ e)
{
    std::string ind;
    Convert_String_to_string(textBoxId->Text->ToString(), ind);
    std::string tip = converterFromStringFormToUtf8(textBoxName->Text->ToString());
    
    int count = counterData("select count(*) from type_publication where id = " + ind);
    if (count != 0)
    {
        type.search("select * from type_publication where id = " + ind, data);
        std::vector<std::string> list = std::vector<std::string>();
        list.push_back(std::to_string(data[0].id));
        list.push_back(data[0].tip);
        massivTypeBook.push_back(list);
        type.redact(ind, tip);
    } else { MessageBox::Show("Такой записи нет!", "Ошибка!"); }
}

System::Void curseFormSQL::RedactTypeBook::buttonDelete_Click(System::Object^ sender, System::EventArgs^ e)
{
    std::string ind;
    Convert_String_to_string(textBoxId->Text->ToString(), ind);
    type.Delete(ind);
}

System::Void curseFormSQL::RedactTypeBook::выйтиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    massivTypeBook.clear();
    this->Close();
}

System::Void curseFormSQL::RedactTypeBook::обновитьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    textBoxId->Text = converterFromstrToSTR(TableClickTypeBookIndex);
    textBoxName->Text = converterFromstrToSTR(TableClickTypeBookName);
}

System::Void curseFormSQL::RedactTypeBook::RedactTypeBook_Load(System::Object^ sender, System::EventArgs^ e)
{
    textBoxId->Text = converterFromstrToSTR(TableClickTypeBookIndex);
    textBoxName->Text = converterFromstrToSTR(TableClickTypeBookName);
}

System::Void curseFormSQL::RedactTypeBook::отменитьИзменениеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    for (int i = 0; i < massivTypeBook.size(); i++)
    {
        type.redact(massivTypeBook[i][0], massivTypeBook[i][1]);
    }
    massivTypeBook.clear();
}
