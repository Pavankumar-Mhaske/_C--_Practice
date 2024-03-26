#include <iostream>
#include <stdexcept>
#include <string>
using namespace std;

string decimalToBinary(int);
int main(void)
{

    int n;
    cout << "Enter a number : ";
    cin >> n;

    try
    {
        cout << "binary of the givne number is : " << decimalToBinary(n);
    }
    catch (const std::runtime_error &e)
    {
        std::cerr << "Caught runtime error : " << e.what() << std::endl;
    }
    return 0;
}

string decimalToBinary(int n)
{
    string binary = "";
    while (n)
    {
        binary = ((n % 2) ? "1" : "0") + binary;
        n /= 2;
    }
    return binary;
}