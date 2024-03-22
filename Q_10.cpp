
#include <iostream>
using namespace std;

int main(void)
{
    float P, R, T;
    double SI;
    cout << "To calculate the simple interest, please provoid \n";
    cout << "\n\tPrinciple amount(P) - ";
    cout << "\n\tInterest rate per annum(R) - ";
    cout << "\n\tTime in years(T) - ";
    cout << "\n\n";
    cout << "\n\t Enter Principle amount(P) - ";
    cin >> P;
    cout << "\n\t Enter Interest rate per annum(R) - ";
    cin >> R;
    cout << "\n\t Enter Time in years(T) - ";
    cin >> T;

    SI = (P * R * T) / 100;
    cout << "\n\n\t";
    cout << "Simple interest is : " << SI;
}

// SI = P × R × T / 100, where SI = simple interest, P = principal amount, R = the interest rate per annum, and T = the time in years.