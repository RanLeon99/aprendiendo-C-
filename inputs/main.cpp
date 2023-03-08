#include <iostream>

using namespace std;

int main()
{
    string name;
    int age;
    cout<< "enter your name here: ";
    getline(cin, name);  // this command nos deja toda una linea para agregar the input

    cout << "Your name is " << name << endl;

    cout<< "Enter you age: ";
    cin >> age;

    cout << "Your age is : " << age << endl;

    return 0;
}
