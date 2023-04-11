#include <iostream>
#include "User.cpp"

using namespace std;

int main()
{
    /*
    cout << "Hello, World!" << endl;
    int number = 65;
    char a = 65;
    cout << number << " " << a << endl;
    */
    User mohamed("Mohamed", "SAMALI", "mohamed.samali@ecole-hexagone.com", 26);
    User othmane("Othmane", "CHBANI", "othmane.chbani@ecole-hexagone.com", 26);
    mohamed.display();
    othmane.display();
   
    return 0;
}