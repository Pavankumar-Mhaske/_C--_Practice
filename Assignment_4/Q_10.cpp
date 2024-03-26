#include <iostream>
#include <string>
using namespace std;

double power(float, int);

int main(void)
{
    float n;
    int p;
    cout << "Enter a number : ";
    cin >> n;
    cout << "enter power of number : ";
    cin >> p;

    try
    {
        double num = power(n, p);
        cout << "power of the number is : " << num << endl;
    }
    catch (const std::runtime_error &e)
    {
        std::cerr << "Caught runtime error : " << e.what() << std::endl;
    }
    return 0;
}

double power(float num, int power)
{
    double result = 1;
    for (int i = 0; i < power; ++i)
    {
        result = result * num;
    }
    return result;
}

// double power(double x, double y) {
//     return std::exp(y * std::log(x));
// }

// double power(double x, double y) {
//     return std::pow(x, y);
// }
