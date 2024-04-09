#include <iostream>
#include <set>
#include <vector>
using namespace std;
class score
{
    int runs;
    int wickets;

public:
    score(int r, int w) : runs(r), wickets(w){};
    int getRuns(void) const;
    int getWickets(void) const;
    void showScore(void) const;
};
int score::getRuns(void) const
{
    return runs;
}
int score::getWickets(void) const
{
    return wickets;
}
void score::showScore(void) const
{
    cout << "Runs : " << getRuns() << " | "
         << "Wickets : " << getWickets() << endl;
}

class compareRuns
{
public:
    /*   In C++, when you overload the comparison operator for a custom comparator used in a set,
         the operator should accept constant references to the elements being compared.     */
    bool operator()(const score &c, const score &d)
    {
        return c.getRuns() < d.getRuns();
    }
};
class compareWickets
{
public:
    bool operator()(const score &c, const score &d)
    {
        return c.getWickets() < d.getWickets();
    }
};

void displayByRuns(set<score, compareRuns> &s);
void displayByWickets(set<score, compareWickets> &s);

int main(void)
{
    //
    cout << "Based on Wickets : " << endl;

    score c1(400, 5), c2(20, 3), c3(100, 9), c4(80, 2);
    //
    set<score, compareWickets> s1;
    //
    vector<score> v{c1, c2, c3, c4};
    s1.insert(v.begin(), v.end());
    // Define iterators it1 and it2
    set<score, compareWickets>::reverse_iterator it1 = s1.rbegin(), it2 = s1.rend();

    for (it1; it1 != it2; ++it1)
    {
        // (*it1).showScore();
        it1->showScore();
    }
    cout << endl;
    //
    cout << "Based on Runs : " << endl;
    set<score, compareRuns> s2;
    s2.insert(v.begin(), v.end());

    //
    for (auto val : s2)
    {
        val.showScore();
    }
    cout << endl;
    //
    cout << "Scores only having centuries in the scores : " << endl;
    set<score, compareRuns> s;
    for (auto scorer : s2)
    {
        if (scorer.getRuns() > 99)
        {
            s.insert(scorer);
        }
    }
    for (auto scorer : s)
        scorer.showScore();
    cout << endl;
    cout << "displayByWickets : " << endl;
    displayByWickets(s1);

    cout << "displayByRuns : " << endl;
    displayByRuns(s2);
    return 0;
}

void displayByRuns(set<score, compareRuns> &s)
{
    for (auto scorer : s)
        scorer.showScore();
    cout << endl;
}
void displayByWickets(set<score, compareWickets> &s)
{
    for (auto scorer : s)
        scorer.showScore();
    cout << endl;
}