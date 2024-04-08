#include <iostream>
#include <array>
using namespace std;

int main(void)
{

    array<float, 5> arr;
    array<float, 5>::iterator it1 = arr.begin(), it2 = arr.end();

    for (it1; it1 != it2; ++it1)
    {
        cin >> *it1;
    }

    array<float, 5>::reverse_iterator it3 = arr.rbegin(), it4 = arr.rend();
    for (it3; it3 != it4; ++it3)
        cout << *it3 << " ";

    cout << endl;
    return 0;
}