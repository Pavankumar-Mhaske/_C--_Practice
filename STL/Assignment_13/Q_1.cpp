#include <iostream>
#include <map>
#include <string>
#include <utility>
using namespace std;

pair<int, bool> findName(map<int, string> &m, string n);
int main(void)
{
    //
    map<int, string> m;
    //
    m[1] = "Rahul";
    m[2] = "Arjun";

    //
    m.insert({3, "Kapil"});
    //
    pair<int, string> p;
    p = make_pair(4, "Sameer");
    m.emplace(p);
    //
    map<int, string>::iterator it1 = m.begin(), it2 = m.end();
    for (it1; it1 != it2; ++it1)
        cout << (*it1).first << " " << (*it1).second << endl;
    //
    cout << endl;
    for (auto val : m)
        cout << val.first << " " << val.second << endl;

    //
    cout << "Count of element 2 in map : " << m.count(2) << endl;
    //
    cout << "Size of the map : " << m.size() << endl;
    //
    m.emplace(5, "Pavan");
    //
    cout << endl;
    for (auto val : m)
        cout << val.first << " " << val.second << endl;

    //
    pair<int, bool> pr = findName(m, "Sameer");
    if (pr.second)
        cout << "Name found at key : " << pr.first << endl;
    return 0;
}

pair<int, bool> findName(map<int, string> &m, string n)
{
    for (auto val : m)
    {
        if (val.second == n)
            return {val.first, true};
    }
    return {-1, false};
}