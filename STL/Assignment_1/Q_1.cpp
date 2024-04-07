#include <iostream>
using namespace std;

template <typename X>
X greatest(X a, X b)
{
    if (a > b)
        return a;
    else
        return b;
}

int main(void)
{
    cout << greatest(5, 6) << endl;
    cout << greatest(5.6, 4.2) << endl;
    cout << greatest(2.6f, 4.2f) << endl;

    return 0;
}