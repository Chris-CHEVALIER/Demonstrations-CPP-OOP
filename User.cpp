#include "User.hpp"
using namespace std;

User::User()
{
    firstName = "John";
    lastName = "Doe";
    age = 0;
    connected = false;
}

User::User(string newFirstName, string newLastName, string newEmail, int newAge)
{
    firstName = newFirstName;
    lastName = newLastName;
    email = newEmail;
    age = newAge;
    connected = false;
}

bool User::isConnected() const
{
    (connected) ? cout << firstName + " est connecté" << endl : cout << firstName + " n'est pas connecté." << endl;
    return connected;
}

void User::rename(string newFirstName)
{
    if (newFirstName.size() > 2 && newFirstName.size() < 50)
    {
        firstName = newFirstName;
    }
}

void User::getOlder()
{
    age++;
}

void User::display() const
{
    cout << firstName + " " + lastName + " a " << age << " ans." << endl;
}

User::~User()
{
}