#include "RedactClient.h"
#include "RedactSub.h"
Client clone;
client_data* data = new client_data[1];
std::vector<std::vector<std::string>> massivClient = std::vector<std::vector<std::string>>();

System::Void curseFormSQL::RedactClient::buttonAdd_Click(System::Object^ sender, System::EventArgs^ e)
{
    std::string id;
    Convert_String_to_string(textBoxAddCode->Text->ToString(), id);
    std::string FIO = converterFromStringFormToUtf8(textBoxAddFIO->Text->ToString());
    std::string address = converterFromStringFormToUtf8(textBoxAddAddress->Text->ToString());
    clone.Add(id, FIO, address);
    int count = counterData("SELECT COUNT(*) FROM client where id = "+ id);
    if (count != 0) {
         int check = counterData("Select count(*) from subscription where id_client = " + id);
         if (check == 0) {
             minimumOneSubClient = stoi(id);
             RedactSub^ form = gcnew RedactSub();
             form->Show();
         }
    }
}

System::Void curseFormSQL::RedactClient::buttonRedact_Click(System::Object^ sender, System::EventArgs^ e)
{
    std::string id;
    Convert_String_to_string(textBoxCode->Text->ToString(), id);
    std::string idRedact;
    Convert_String_to_string(textBoxRedactWhat->Text->ToString(), idRedact);
    std::string FIO = converterFromStringFormToUtf8(textBoxFIO->Text->ToString());
    std::string address = converterFromStringFormToUtf8(textBoxAddress->Text->ToString());
        
    int count = counterData("select count(*) from client where id = " + idRedact);
    if (count != 0) {
        clone.search("SELECT * FROM client WHERE id = " + idRedact, data);
        std::vector<std::string> list = std::vector<std::string>();
        list.push_back(id);
        list.push_back(std::to_string(data[0].id));
        list.push_back(data[0].FIO);
        list.push_back(data[0].address);
        massivClient.push_back(list);

        clone.redact(idRedact, id, FIO, address);
    }
    else { MessageBox::Show("Такой записи нет!", "Ошибка!"); }
}

System::Void curseFormSQL::RedactClient::buttonDelete_Click(System::Object^ sender, System::EventArgs^ e)
{
    std::string id;
    Convert_String_to_string(textBoxDeleteCode->Text->ToString(), id);
    clone.Delete(id);
}

System::Void curseFormSQL::RedactClient::RedactClient_Load(System::Object^ sender, System::EventArgs^ e)
{
    textBoxRedactWhat->Text = converterFromstrToSTR(TableClickCode);
    textBoxCode->Text = converterFromstrToSTR(TableClickCode);
    textBoxFIO->Text = converterFromstrToSTR(TableClickFio);
    textBoxAddress->Text = converterFromstrToSTR(TableClickAddress);
}

System::Void curseFormSQL::RedactClient::закрытьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    massivClient.clear();
    this->Close();
}

System::Void curseFormSQL::RedactClient::обновитьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    textBoxRedactWhat->Text = converterFromstrToSTR(TableClickCode);
    textBoxCode->Text = converterFromstrToSTR(TableClickCode);
    textBoxFIO->Text = converterFromstrToSTR(TableClickFio);
    textBoxAddress->Text = converterFromstrToSTR(TableClickAddress);
}

System::Void curseFormSQL::RedactClient::отменитьИзменениеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    for (int i = 0; i < massivClient.size(); i++)
    {
        clone.redact(massivClient[i][0], massivClient[i][1], massivClient[i][2], massivClient[i][3]);
    }
    massivClient.clear();
}
