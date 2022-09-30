#include <iostream>  
#include <map>
#include <string>
using namespace std;

void variables() {
    string hello = "Hello!";
    cout << hello<< endl;

    int myNum;
    myNum = 15;
    cout << myNum << endl;

    int myNum2 = 15;
    myNum2 = 10;
    cout << myNum2 << endl;

    int myAge = 23;
    cout << "I am " << myAge << " years old." << endl;

    int x = 5;
    int y = 6;
    int sum = x + y;
    cout << sum << endl;
}

void expressions() {
    int x;         
    x= (6/2) + 2; 
    cout << "Value of x is : " << x << endl;

    int y;
    y = (9/3) + (5*10);
    cout << "Value of y is : " << y << endl; 
}

void conditionals() {
    int x;
    int y;

    cout << "Type a number: " << endl;
    cin >> x;
    cout << "x = " << x << endl;
    cout << "Type another number: " << endl;
    cin >> y;
    cout << "y = " << y << endl;

    if (x > y) {
        cout << "x is greater than y" << endl;
    }
    else { 
        cout << "y is greater than x" << endl;
    }
}

void functions() {
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

void classes(){
    class MyClass{
        public:
        int myNum;
        string mystring;
    };

    
    MyClass myObj;
    myObj.myNum = 27+30;
    myObj.mystring = "This is a very simple example of how a class works";

    cout << myObj.myNum << endl;
    cout << myObj.mystring << endl;  
}

void maps(){
    map<int,string> example_map;

    example_map.insert(pair<int, string>(1, "one"));
    example_map.insert(pair<int, string>(2, "two"));
    example_map.insert(pair<int, string>(3, "three"));
    example_map.insert(pair<int, string>(4, "four"));

    cout << example_map[1] << " " << example_map[2] << " " << example_map[3] << " " << example_map[4] << endl;
}

int main(){
    variables();
    expressions();
    conditionals();
    functions();
    classes();
    maps();
}