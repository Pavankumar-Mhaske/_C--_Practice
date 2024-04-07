#include <iostream>
using namespace std;

template <typename X>
X greaterr(X a, X b)
{
    a > b ? return a : return b;
}

int main(void)
{
    cout << greaterr(5, 6);

    return 0;
}