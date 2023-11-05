#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    string numString = to_string(n);
    int numDigits = numString.length();

    if (numDigits > 3)
    {
        cout << "More than 3 digits" << endl;
    }
    else

        cout << numDigits << endl;

    return 0;
}