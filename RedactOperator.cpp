#include "RedactOperator.h"

Worker oper;
worker_data Post;
worker_data* data = new worker_data[1];
std::vector<std::vector<std::string>> massivWorker = std::vector<std::vector<std::string>>();

System::Void curseFormSQL::RedactOperator::printFirst(System::Object^ sender, System::EventArgs^ e)
{
    textBoxLogin->Text = converterFromstrToSTR(TableClickLogin);
    textBoxPass->Text = converterFromstrToSTR(TableClickPassword);
    textBoxRedactWhat->Text = converterFromstrToSTR(TableClickLogin);
    Post.post = TableClickPost;
}
System::Void curseFormSQL::RedactOperator::listBoxWorker_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
    String^ selectedPost = listBoxWorker->SelectedItem->ToString();
    std::string post = converterFromStringFormToUtf8(selectedPost);
    Post.post = post;
}
System::Void curseFormSQL::RedactOperator::buttonAdd_Click(System::Object^ sender, System::EventArgs^ e)
{
    std::string login = converterFromStringFormToUtf8(textBoxAddLogin->Text->ToString());
    std::string password = converterFromStringFormToUtf8(textBoxAddPass->Text->ToString());

    if (Post.post != "") {
        oper.Add(login, password, Post.post);
    }
    else { MessageBox::Show("Поле должность пустое!", "Ошибка!"); }
}

System::Void curseFormSQL::RedactOperator::buttonRedact_Click(System::Object^ sender, System::EventArgs^ e)
{
    std::string login = converterFromStringFormToUtf8(textBoxLogin->Text->ToString());
    std::string Redactlogin = converterFromStringFormToUtf8(textBoxRedactWhat->Text->ToString());
    std::string password = converterFromStringFormToUtf8(textBoxPass->Text->ToString());
    //std::string post = converterFromStringFormToUtf8(textBoxPost->Text->ToString());

    if (Post.post != "") {
        int count = counterData("select count(*) from worker where login = '" + Redactlogin + "'");
        if (count != 0) {
            oper.search("select * from worker where login = '" + Redactlogin + "'", data);
            std::vector<std::string> list = std::vector<std::string>();
            list.push_back(login);
            list.push_back(data[0].login);
            list.push_back(data[0].password);
            list.push_back(data[0].post);
            massivWorker.push_back(list);

            oper.redact(Redactlogin, login, password, Post.post);
        }
        else { MessageBox::Show("Такой записи нет!", "Ошибка!"); }
    }
    else { MessageBox::Show("Поле должность пустое!", "Ошибка!"); }
}

System::Void curseFormSQL::RedactOperator::buttonDelete_Click(System::Object^ sender, System::EventArgs^ e)
{
    std::string login = converterFromStringFormToUtf8(textBoxDeleteLogin->Text->ToString());

    oper.Delete(login);
}

System::Void curseFormSQL::RedactOperator::закрытьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    massivWorker.clear();
    this->Close();
}

System::Void curseFormSQL::RedactOperator::обновитьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    textBoxLogin->Text = converterFromstrToSTR(TableClickLogin);
    textBoxPass->Text = converterFromstrToSTR(TableClickPassword);
    textBoxRedactWhat->Text = converterFromstrToSTR(TableClickLogin);
    Post.post = TableClickPost;
}

System::Void curseFormSQL::RedactOperator::отменитьИзменениеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    for (int i = 0; i < massivWorker.size(); i++)
    {
        oper.redact(massivWorker[i][0], massivWorker[i][1], massivWorker[i][2], massivWorker[i][3]);
    }
    massivWorker.clear();
}
