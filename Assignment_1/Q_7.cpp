#include <iostream>
using namespace std;

int main(void)
{
    double num1, num2, num3;

    cout << "To calculate the avarage of three numbers : \n\n";
    cout << "Enter first number : \n";
    cin >> num1;
    cout << "Enter second number : \n";
    cin >> num2;
    cout << "Enter thired number : \n";
    cin >> num3;

    cout << "\n\n\tAvarage of the " << num1 << ", " << num2 << ", " << num3 << ", "
         << " is : " << (num1 + num2 + num3) / 3;
}