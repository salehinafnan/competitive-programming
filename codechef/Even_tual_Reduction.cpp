#include <iostream>
#include <unordered_map>
using namespace std;

bool checkEvenSubstring(string &inputStr)
{
    unordered_map<char, int> charFrequency;
    for (char character : inputStr)
        charFrequency[character]++;
    for (auto &pair : charFrequency)
    {
        if (pair.second % 2 != 0)
            return false;
    }
    return true;
}

int main()
{
    int testCases;
    cin >> testCases;
    while (testCases--)
    {
        int strLength;
        cin >> strLength;
        string inputStr;
        cin >> inputStr;
        if (checkEvenSubstring(inputStr))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}