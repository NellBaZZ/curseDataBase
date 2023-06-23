#include "RedactBook.h"

Book book;

book_data* data = new book_data[1];
std::vector<std::vector<std::string>> massivBook = std::vector<std::vector<std::string>>();
// СДЕЛАТЬ ПРОВЕРКА ТИПА
System::Void curseFormSQL::RedactBook::buttonAdd_Click(System::Object^ sender, System::EventArgs^ e)
{
    std::string ind, typeId, price;
    Convert_String_to_string(textBoxAddIndex->Text->ToString(), ind);
    std::string name = converterFromStringFormToUtf8(textBoxAddName->Text->ToString());
    Convert_String_to_string(textBoxAddTypeBook->Text->ToString(), typeId);
    Convert_String_to_string(textBoxAddPrice->Text->ToString(), price);
    book.Add(ind, typeId, name, price);
}

System::Void curseFormSQL::RedactBook::buttonRedact_Click(System::Object^ sender, System::EventArgs^ e)
{
    std::string redactInd, ind, typeId, price;
    Convert_String_to_string(textBoxRedactWhat->Text->ToString(), redactInd);
    Convert_String_to_string(textBoxIndex->Text->ToString(), ind);
    std::string name = converterFromStringFormToUtf8(textBoxName->Text->ToString());
    Convert_String_to_string(textBoxType->Text->ToString(), typeId);
    Convert_String_to_string(textBoxPrice->Text->ToString(), price);

    int count = counterData("select count(*) from publication where id = " + redactInd);
    if (count != 0) {
        book.search("SELECT publication.id, id_type, tip, name, price FROM publication, type_publication WHERE publication.id_type = type_publication.id and publication.id = " + redactInd, data);
        std::vector<std::string> list = std::vector<std::string>();
        list.push_back(ind);
        list.push_back(std::to_string(data[0].index));
        list.push_back(std::to_string(data[0].id_type));
        list.push_back(data[0].name);
        list.push_back(std::to_string(data[0].price));
        massivBook.push_back(list);

        book.redact(redactInd, ind, typeId, name, price);
    }
    else { MessageBox::Show("Такой записи нет!", "Ошибка!"); }
}

System::Void curseFormSQL::RedactBook::buttonDelete_Click(System::Object^ sender, System::EventArgs^ e)
{
    std::string ind;
    Convert_String_to_string(textBoxDeleteIndex->Text->ToString(), ind);
    book.Delete(ind);
}

System::Void curseFormSQL::RedactBook::закрытьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    massivBook.clear();
    this->Close();
}

System::Void curseFormSQL::RedactBook::RedactBook_Load(System::Object^ sender, System::EventArgs^ e)
{
    textBoxRedactWhat->Text = converterFromstrToSTR(TableClickIndexBook);
    textBoxIndex->Text = converterFromstrToSTR(TableClickIndexBook);
    textBoxType->Text = converterFromstrToSTR(TableClickTypeBook);
    textBoxName->Text = converterFromstrToSTR(TableClickNameBook);
    textBoxPrice->Text = converterFromstrToSTR(TableClickPriceBook);
}

System::Void curseFormSQL::RedactBook::обновитьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    textBoxRedactWhat->Text = converterFromstrToSTR(TableClickIndexBook);
    textBoxIndex->Text = converterFromstrToSTR(TableClickIndexBook);
    textBoxType->Text = converterFromstrToSTR(TableClickTypeBook);
    textBoxName->Text = converterFromstrToSTR(TableClickNameBook);
    textBoxPrice->Text = converterFromstrToSTR(TableClickPriceBook);
}

System::Void curseFormSQL::RedactBook::отменитьИзменениеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    for (int i = 0;  i < massivBook.size(); i++)
    {
        book.redact(massivBook[i][0], massivBook[i][1], massivBook[i][2], massivBook[i][3], massivBook[i][4]);
    }
    massivBook.clear();
}
