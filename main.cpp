#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class User {
public:
    string _name;
    string _login;
    string _pass;
};

class Message {
public:
    string _text;
    string _sender;
    string _receiver;
};

int main() {
    // Пример создания и записи в файл объекта класса User
    User user;
    user._name = "John Doe";
    user._login = "john_doe";
    user._pass = "securepassword";

    ofstream userFile("user.txt");
    userFile << user._name << "\n" << user._login << "\n" << user._pass;
    userFile.close();

    // Пример создания и записи в файл объекта класса Message
    Message message;
    message._text = "Hello, world!";
    message._sender = "john_doe";
    message._receiver = "jane_doe";

    ofstream messageFile("message.txt");
    messageFile << message._text << "\n" << message._sender << "\n" << message._receiver;
    messageFile.close();

    return 0;
}