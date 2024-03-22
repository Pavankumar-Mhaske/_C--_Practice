#include <iostream>
using namespace std;

int main(void)
{

    char ch;
    cout << "Enter a character : ";
    cin >> ch;
    // a - z = 97 - 122
    // A - Z = 65 - 90
    // 0 - 9 = 48 - 57

    // cout << (int)ch;

    switch (ch)
    {

    case 48 ... 57:
        cout << "Digit";
        break;
    case 65 ... 90:
        cout << "Uppercase alphabet";
        break;
    case 97 ... 122:
        cout << "Lowercase alphabet";
        break;
    default:
        cout << "Special character";
    }

    return 0;
}