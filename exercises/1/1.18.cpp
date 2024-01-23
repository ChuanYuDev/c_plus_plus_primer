#include <iostream>

int main()
{
    int curr_val = 0, val = 0;

    if (std::cin >> curr_val)
    {
        int cnt = 1;

        while (std::cin >> val)
        {
            if (curr_val == val)
                ++cnt;
            else
            {
                std::cout << curr_val << " occurs " << cnt << " times " << std::endl;
                curr_val = val;
                cnt = 1;
            }
        }
        std::cout << curr_val << " occurs " << cnt << " times " << std::endl;
    }
}