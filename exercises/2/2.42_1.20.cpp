#include <string>
#include <iostream>
#include "2.42_sales_data.h"

int main()
{
    Sales_data data;
    double price = 0;

    while (std::cin >> data.book_no >> data.units_sold >> price)
    {
        data.revenue = data.units_sold * price;
        std::cout << data.book_no << " " << data.units_sold << " " << data.revenue << " " << price << std::endl;
    }

    return 0;
}