#include <iostream>
#include <vector>
using namespace std;

int main(void)
{

    //
    vector<vector<int>> vec;
    //
    vector<int> v1 = {1, 2, 3, 4}, v2 = {10, 20, 30}, v3 = {5, 6, 7, 8, 9};

    //
    vec.push_back(v1);
    //
    vec.insert(vec.end(), {v2, v3});

    /**
        This can be the way to - Insert v2 and v3 at the end of vec in a separate call
        vec.insert(vec.end(), {v2.begin(), v2.end()});
        vec.insert(vec.end(), {v3.begin(), v3.end()});
    */

    //
    // for (auto subvec : vec)  // - Efficiency: Using const auto& avoids unnecessary copying of each sub-vector in vec.
    for (const auto &subvec : vec)
    {
        {

            for (auto val : subvec)
                cout << val << " ";
            cout << " | ";
        }
    }
    return 0;
}
