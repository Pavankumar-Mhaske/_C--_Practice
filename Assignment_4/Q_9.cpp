#include <iostream>
#include <string>
using namespace std;

int reverseNumber(int);

int main(void)
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    try
    {
        int num = reverseNumber(n);
        cout << "Reverse of the number is : " << num << endl;
    }
    catch (const std::runtime_error &e)
    {
        std::cerr << "Caught runtime error : " << e.what() << std::endl;
    }
    return 0;
}

int reverseNumber(int n)
{
    // std::string reverseNum = "";
    // while (n)
    // {
    //     reverseNum = reverseNum + to_string(n % 10);
    //     n /= 10;
    // }
    // return std::stoi(reverseNum);

    int reverseNum = 0;

    while (n)
    {
        reverseNum = reverseNum * 10 + n % 10;
        n /= 10;
    }

    return reverseNum;
}
