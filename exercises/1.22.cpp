#include <iostream>
#include <external/cppp/1/Sales_item.h>

int main()
{
    Sales_item item;

    if (std::cin >> item)
    {
        Sales_item sum(item);

        while(std::cin >> item)
        {
            if (!compareIsbn(sum, item))
            {
                std::cerr << "sum: " << sum << "\nitem: " << item << "\nisbn is not same" << std::endl;
                return 1;
            }
            sum += item;
        }

        std::cout << sum << std::endl;
    }

    return 0;
}