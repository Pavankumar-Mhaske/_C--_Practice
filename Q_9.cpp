#include <iostream>
using namespace std;

int main(void)
{
    char ch;
    cout << "Enter a character whoose ASCII code u wanna see : ";
    cin >> ch;

    cout << "ASCII code for " << ch << " is - " << (int)ch;
    cout << "\nASCII code for " << ch << " is - " << static_cast<int>(ch);
}