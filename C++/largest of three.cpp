#include <iostream>
using namespace std;   

int main()
{
    int number1,number2,number3;
    cout << "Enter first number: ";
    cin >> number1;

    cout << "Enter second number: ";
    cin >> number2;

    cout << "Enter third number: ";
    cin >> number3;

    if ((number1 > number2 ) && (number1 > number3))
        cout << "The greatest of the three numbers is: " << number1 << endl;
    else if (number2 > number1 > number3)
        cout << "The greatest of the three numbers is: " << number2 << endl;
    else
        cout << "The greatest of the three numbers is: " << number3 << endl;
    return 0;
}