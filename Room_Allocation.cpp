#include <iostream>
#include <cmath>

int main()
{
    int T;
    std::cin >> T;
    while (T--)
    {
        int N;
        std::cin >> N;
        int total_rooms = 0;
        for (int i = 0; i < N; i++)
        {
            int Ai;
            std::cin >> Ai;
            total_rooms += std::ceil((double)Ai / 2);
        }
        std::cout << total_rooms << std::endl;
    }
    return 0;
}