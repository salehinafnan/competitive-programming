#include <iostream>
#include <string>
using namespace std;

bool isConsonant(char c)
{
    return (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u');
}

bool isEasyToPronounce(string S)
{
    int consecutiveConsonants = 0;
    for (char c : S)
    {
        if (isConsonant(c))
        {
            consecutiveConsonants++;
            if (consecutiveConsonants >= 4)
                return false;
        }
        else
        {
            consecutiveConsonants = 0;
        }
    }
    return true;
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        string S;
        cin >> S;

        for (char &c : S)
        {
            c = tolower(c);
        }

        if (isEasyToPronounce(S))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
