#include <iostream>
using namespace std;

int main(void)
{

    int n;
    cout << "Enter a number : ";
    cin >> n;

    while (n)
    {
        if (n % 10 >= 8)
            break;
        n /= 10;
    }

    if (n)
        cout << "It's not a valid octal number!" << n;
    else
        cout << "It's a valid octal number!";
    return 0;
}
