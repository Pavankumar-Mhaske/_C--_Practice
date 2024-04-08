#include <iostream>
#include <list>
using namespace std;

int main(void)
{

    //
    list<int> l1;
    //
    l1.push_back(10);
    //
    l1.push_front(20);
    //
    list<int>::iterator it1 = l1.begin();
    l1.insert(++it1, 30);
    //
    it1 = l1.begin();
    for (int i = 2; i; --i)
        ++it1;
    l1.insert(it1, {22, 44, 33});
    //
    for (int val : l1)
        cout
            << val << " ";
    cout << endl;
    //
    it1 = l1.end();
    for (int i = 2; i; --i)
        --it1;
    *it1 = 25;
    cout << *it1 << endl;
    //
    for (it1 = l1.begin(); it1 != l1.end(); it1++)
        cout << *it1 << " ";
    cout << endl;
    //
    cout << "front element is : " << l1.front() << endl;
    //
    l1.pop_front();
    //
    l1.pop_back();
    //
    for (it1 = l1.begin(); it1 != l1.end(); it1++)
        cout << *it1 << " ";
    cout << endl;
    //
    l1.erase(++(l1.begin()), --(l1.end()));
    //
    for (int val : l1)
        cout
            << val << " ";
    cout << endl;

    return 0;
}