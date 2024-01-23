#include <iostream>
#include <external/cppp/1/Sales_item.h>

int main()
{
    Sales_item item1, item2, item;
    std::cin >> item1 >> item2;

    if (item1.isbn() != item2.isbn())
    {
        std::cerr << "ISBN is not same" << std::endl;
        return 1;
    }

    std::cout << item1 + item2 << std::endl;
    return 0;
}