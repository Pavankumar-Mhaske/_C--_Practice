#include <iostream>
using namespace std;
#include <stdexcept>
inline int highestDigit(int);
int main(void)
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    try
    {
        int i = highestDigit(n);
        cout << "highest digit is : " << i;
    }
    catch (const std::runtime_error &e)
    {
        std::cerr << "Caught runtime error : " << e.what() << std::endl;
    }
    return 0;
}

int highestDigit(int n)
{

    int digit = n % 10;

    for (n; n; n /= 10)
        if (n % 10 > digit)
            digit = n % 10;

    return digit;
}