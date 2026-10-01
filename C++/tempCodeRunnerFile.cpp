#include <iostream>
using namespace std;   

int main()
{
    int number1,number2;
    cout << "Enter a number: ";
    cin >> number1;

    cout << "Enter another number: ";
    cin >> number2;

    if (number1 > number2)
        cout << "The greatest of the two numbers is: " << number1 << endl;
    else
        cout << "The greatest of the two numbers is: " << number2 << endl;
    
    return 0;
}