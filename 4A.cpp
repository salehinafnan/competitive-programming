#include <iostream>

bool isEven(int n)
{
    return n % 2 == 0;
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