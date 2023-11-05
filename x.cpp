#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;
    int segment1 = B / 2;
    int segment2 = A - B;
    int totalTravelTime = segment1 + segment2;
    totalTravelTime = ceil(totalTravelTime);

    cout << totalTravelTime << endl;

    return 0;
}
