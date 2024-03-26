#include <iostream>
using namespace std;
#include <stdexcept>
inline int HCF(int, int);

int main(void)
{

    int num1, num2;
    cout << "enter two numbers : ";
    cin >> num1 >> num2;
    try
    {
        cout << "HCF is : " << HCF(num1, num2);
    }
    catch (const std::runtime_error &e)
    {
        std::cerr << "Error : " << e.what();
    }
    return 0;
}
int HCF(int a, int b)
{
    // HCF stands for least common multiple, and it's the *smallest positive number* that can be divided evenly by two or more numbers
    // a = a + b = a + b -a = b
    // b = a + b - b = a

    if (a <= 1 || b <= 1)
        if (a == 0 || b == 0)
            return 0;
        else if (a == 1 || b == 1)
            return 1;
        else
            throw runtime_error("HCF can be calculated for positive numbers only!");

    if (a > b)
    {
        a = a + b;
        b = a - b;
        a = a - b;
    }

    for (int i = a, flag = 1; flag; --i)
    {
        if (a % i == 0 && b % i == 0)
            return i;
    }
}