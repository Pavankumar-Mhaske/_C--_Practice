#include <iostream>
using namespace std;

int main(void)
{

    float num1, num2, num3;
    cout << "enter three numbers : ";
    cin >> num1 >> num2 >> num3;

    if (num1 > num2)
    {
        // num1 > num2
        if (num1 > num3)
            //  num1 > num2 > num3                                              num1 > num2 > num3
            num2 > num3 ? cout << num1 << " > " << num2 << " > " << num3 : cout << num1 << " > " << num3 << " > " << num2;
        else
            //  num3 > num1 > num2
            cout << num3 << " > " << num1 << " > " << num2;
    }
    else
    {
        // num2 > num1
        if (num2 > num3)
            //  num2 > num1 > num3                                          num2 > num3 > num1
            num1 > num3 ? cout << num2 << " > " << num1 << " > " << num3 : cout << num2 << " > " << num3 << " > " << num1;
        else
            //  num3 > num2 > num1
            cout << num3 << " > " << num2 << " > " << num1;
    }

    return 0;
}