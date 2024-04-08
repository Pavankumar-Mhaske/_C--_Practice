#include <iostream>
#include <array>
using namespace std;

int main(void)
{

    array<int, 5> arr{1, 2, 3, 4, 5};
    for (int i : arr)
        cout << i << " ";
    cout << endl;

    array<int, 5>::iterator it1, it2;
    it1 = arr.begin();
    it2 = arr.end();
    for (it1; it1 != it2; ++it1)
        cout << *it1 << " ";
    cout << endl;

    return 0;
}