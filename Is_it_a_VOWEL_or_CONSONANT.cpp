#include <iostream>
using namespace std;

void solve(char c)
{
    if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        cout << "Vowel";
    else
        cout << "Consonant";
    cout << endl;
}

int main()
{
    char c;
    cin >> c;
    solve(c);
    return 0;
}
