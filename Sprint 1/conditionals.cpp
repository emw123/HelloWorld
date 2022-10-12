#include <iostream>  
using namespace std;  
int main()  
{
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