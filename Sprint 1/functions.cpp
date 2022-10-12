#include <iostream>  
using namespace std; 

void myFunction() {
    int x = (55/5);
    int y = (70*11);
    int z = (x+y);

    cout << "x + y is " << z << endl;
}

void myFunction2() {
    string firstname;
    string lastname;
    string phonenumber;
    string email;
    cout << "Please enter your first name: " << endl;
    cin >> firstname;
    cout << "Please enter your last name: " << endl;
    cin >> lastname;
    cout << "Please enter your phone number: " << endl;
    cin >> phonenumber;
    cout << "Please enter your email: " << endl;
    cin >> email;
    cout <<"First Name: " << firstname << endl;
    cout <<"Last Name: " << lastname << endl;
    cout <<"Phone Number: " << phonenumber << endl;
    cout <<"Email: " << email << endl;
    string correct;
    cout << "Is this corrrect (y/n)?" << endl;
    cin >> correct;
}

int main() {
    myFunction();
    myFunction2();
}