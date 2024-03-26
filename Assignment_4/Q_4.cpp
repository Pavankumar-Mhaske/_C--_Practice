#include <iostream>
using namespace std;
inline int LCM(int, int);
int main(void)
{

    int num1, num2;
    cout << "enter two numbers : ";
    cin >> num1 >> num2;

    cout << "lcm is : " << LCM(num1, num2);
    return 0;
}

int LCM(int a, int b)
{
    // LCM stands for least common multiple, and it's the *smallest positive number* that can be divided evenly by two or more numbers
    // a = a + b = a + b -a = b
    // b = a + b - b = a
    if (a < 1 || b < 1)
        if (a == 0 || b == 0)
            return 0;
        else
        {
            if (a < 0)
                a *= -1;
            else
                b *= -1;
        }

    if (a > b)
    {
        a = a + b;
        b = a - b;
        a = a - b;
    }

    for (int i = b, flag = 1; flag; ++i)
    {
        if (i % a == 0 && i % b == 0)
            return i;
    }
}