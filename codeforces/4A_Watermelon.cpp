// Codeforces 4A - Watermelon
// https://codeforces.com/problemset/problem/4/A

#include <iostream>

bool isEven(int n)
{
    return n % 2 == 0 && n > 2; // 2 can only split into 1 + 1
}

int main()
{
    int n;
    std::cin >> n;

    if (isEven(n))
    {
        std::cout << "YES" << std::endl;
    }
    else
    {
        std::cout << "NO" << std::endl;
    }

    return 0;
}