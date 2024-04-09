#include <iostream>
#include <string>
#include <sstream>
using namespace std;

void stringReverse(string &s);
void trim(string &s1);
int countWords(string &s);
void removeExtraSpaces(string &s1);
void splitStringToWords(string &s1, string words[]);
int main(void)
{
    //
    string s1;
    //
    s1 = "mysirg education services";
    //
    cout << s1 << endl;
    //
    s1 = s1 + " private limited";
    //
    cout << s1 << endl;
    //
    s1.erase(26);
    //
    cout << s1 << endl;
    //
    s1.erase(5, 1);
    //
    cout << s1 << endl;
    //
    string wordToRemove = "services";

    size_t pos = s1.find(wordToRemove);

    // You can think of std::string::npos as a special sentinel value that represents an invalid or non-existent position/index in a string.
    if (pos != string::npos)
    {
        // cout << "index value : " << pos;
        s1.erase(pos, wordToRemove.length());
    }
    //
    cout << s1 << endl;
    //
    s1 += '.';
    //
    cout << s1 << endl;
    //
    s1 = "mysirG education   services  private limited  ";
    //
    stringReverse(s1);
    //
    cout << s1 << endl;
    //
    trim(s1);
    //
    cout << s1 << endl;
    //
    int w = countWords(s1);
    cout << "Word count = " << w << endl;

    //
    cout << s1 << endl;
    //
    removeExtraSpaces(s1);
    //
    cout << s1 << endl;
    //
    cout << "Length of string : " << s1.length() << endl;
    //
    string words[5];
    splitStringToWords(s1, words);
    for (int i = 0; i < 5; i++)
        cout << i << " - " << words[i] << endl;
    //

    return 0;
}
// mysirg education services private limited

void stringReverse(string &s)
{
    int length = s.length();
    for (int i = 0; i < length / 2; ++i)
    {
        char temp = s[i];
        s[i] = s[length - 1 - i];
        s[length - 1 - i] = temp;
    }
    return;
}
void trim(string &s1)
{

    // Find the position of the first non-space character
    size_t pos = s1.find_first_not_of(" \t");
    if (pos != string::npos)
        s1.erase(0, pos);
}
int countWords(string &s)
{
    // Input String Stream
    std::istringstream iss(s);
    int wordCount = 0;
    string word;

    while (iss >> word)
        wordCount++;
    return wordCount;
}

void removeExtraSpaces(string &s1)
{
    istringstream iss(s1);
    string word, s;

    while (iss >> word)
    {
        s = s + " " + word;
    }
    s1 = s;
    trim(s1);
    return;
}

void splitStringToWords(string &s1, string words[])
{
    istringstream iss(s1);
    int i = 0;
    string word;
    while (iss >> word)
        words[i++] = word;
}