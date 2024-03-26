#include <iostream>
#include <string>
using namespace std;

string decimalToOctal(int);

int main(void)
{

    int n;
    cout << "Enter a number : ";
    cin >> n;

    try
    {

        cout << "octal of the given number is " << decimalToOctal(n);
    }
    catch (const std::runtime_error &e)
    {
        std::cerr << "Caught runtime error : " << e.what() << std::endl;
    }

    return 0;
}

string decimalToOctal(int decimal)
{
    std::string octal = "";

    while (decimal)
    {
        octal = std::to_string(decimal % 8) + octal;
        decimal /= 8;
    }
    return octal;
}