#include <iostream>
#include <string>

using namespace std;

string getSmallestString(string S) {
  int N = S.length();
  string smallestString = S;

  for (int i = 1; i < N - 2; i++) {
    string newString = S;
    newString.replace(i, 3, "100");

    if (newString < smallestString) {
      smallestString = newString;
    }
  }

  if (S == "110" || S == "101" || S == "010") {
    return "100";
  } else {
    return smallestString;
  }
}

int main() {
  int T;
  cin >> T;

  for (int i = 0; i < T; i++) {
    int N;
    cin >> N;
    string S;
    cin >> S;

    string smallestString = getSmallestString(S);
    cout << smallestString << endl;
  }

  return 0;
}
