#include <iostream>
#include <external/cppp/1/Sales_item.h>

int main()
{
    Sales_item sum, item;

    if (!(std::cin >> sum))
    {
        std::cerr << "No data" << std::endl;
        return 1;
    }

    while(std::cin >> item)
    {
        if (sum.isbn() != item.isbn())
        {
            std::cerr << "Sum: " << sum << "\nItem: " << item << "\nISBN is not same" << std::endl;
            return 1;
        }
        sum += item;
    }

    std::cout << sum << std::endl;

    return 0;
}