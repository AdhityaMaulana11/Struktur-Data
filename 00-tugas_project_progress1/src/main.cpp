#include <iostream>
#include <string>

using namespace std;

struct userEmailData
{
    string name;
    string password;
};

struct EmailService
{
    userEmailData emailUserSender;
    string receiver;
    string messages;
};

void welcome()
{
    cout << "==========Welcome to Electronic Mail Service!==========" << endl;
    cout << "Please create an Email account first!" << endl;
}

void createEmailAccount(userEmailData &usrData)
{
    cout << "\n========================Register=======================" << endl;
    cout << "Enter your name: ";
    getline(cin, usrData.name);
    cout << "Enter your password: ";
    getline(cin, usrData.password);
    cout << "=======================================================" << endl;
    cout << "\n[Account successfully created!]" << endl;
}

void sendEmail(EmailService &email)
{
    cout << "=======================Send Email======================" << endl;
    cout << "Write your message here: " << endl;
    getline(cin, email.messages);
    cout << "Enter message receiver: " << endl;
    getline(cin, email.receiver);
    cout << "=======================================================" << endl;
    cout << "[Message sent successfully!]" << endl;
}

void showMessage(EmailService &email)
{
    cout << "\n=======================================================" << endl;
    cout << "Message: [" << email.messages << "]" << endl;
    cout << "From: " << email.emailUserSender.name << endl;
    cout << "To: " << email.receiver << endl;
    cout << "=======================================================" << endl;
}

int main(int argc, char *argv[])
{
    userEmailData sender1;
    EmailService message1;

    welcome();
    createEmailAccount(sender1);
    sendEmail(message1);
    showMessage(message1);
    return 0;
}
