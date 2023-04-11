#pragma once
using namespace std;

class User
{
private:
    string firstName;
    string lastName;
    string email;
    int age;
    bool connected;

public:
    User();
    User(string newFirstName, string newLastName, string newEmail, int newAge);
    bool isConnected() const;
    void rename(string newFirstName);
    void getOlder();
    void display() const;
    ~User();
};