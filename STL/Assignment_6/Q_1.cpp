#include <iostream>
#include <forward_list>
using namespace std;

int main(void)
{
    //
    forward_list<int> l1;
    //
    l1.push_front(10);
    //
    l1.emplace_front(20);
    //
    l1.insert_after(++(l1.begin()), 22);
    //
    int length = 0;
    for (auto val : l1)
        ++length;
    cout << "Length of the list : " << length << endl;
    //
    for (auto val : l1)
        cout << val << " ";
    cout << endl;
    //
    forward_list<int>::iterator it1 = l1.begin();
    for (int i = 1; i < length; ++i)
        ++it1;
    l1.emplace_after(it1, 35);
    //
    for (it1 = l1.begin(); it1 != l1.end(); ++it1)
        cout << *it1 << " ";
    cout << endl;
    //
    length = 0;
    for (auto val : l1)
        ++length;
    it1 = l1.begin();
    for (int i = 1; i < length - 1; ++i)
        ++it1;
    // cout << "second last : " << *it1 << " , length : " << length << endl;
    *it1 = 75;
    //
    l1.pop_front();
    //
    for (auto val : l1)
        cout << val << " ";
    cout << endl;
    //
    l1.erase_after(l1.begin(), l1.end());
    //
    for (it1 = l1.begin(); it1 != l1.end(); ++it1)
        cout << *it1 << " ";
    cout << endl;
    //
    l1 = {20, 40, 60, 80, 100, 120};
    //
    l1.erase_after(l1.begin());
    for (auto val : l1)
        cout << val << " ";
    cout << endl;
    return 0;
}