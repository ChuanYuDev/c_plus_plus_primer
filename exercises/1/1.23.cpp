#include <iostream>
#include <external/cppp/1/Sales_item.h>

int main()
{
    Sales_item current_item, item;
    int num = 0;

    if (!(std::cin >> current_item))
    {
        std::cerr << "No data" << std::endl;
        return 1;
    }

    num = 1;

    while(std::cin >> item)
    {
        if (current_item.isbn() == item.isbn())
            ++num;
        else
        {
            std::cout << current_item.isbn() << " " << num << std::endl;
            current_item = item;
            num = 1;
        }
    }

    std::cout << current_item.isbn() << " " << num << std::endl;
    
    return 0;
}