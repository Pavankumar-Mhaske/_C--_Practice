#include <iostream>
using namespace std;

int natural(int);
int main(void)
{
    int n;
    cout << "Enter a natural numbers : ";
    cin >> n;
    cout << "Sum is : " << natural(n);
    return 0;
}

int natural(int n)
{
    if (n == 1)
        return 2 * n;
    else
        return (2 * n) + natural(n - 1);
}