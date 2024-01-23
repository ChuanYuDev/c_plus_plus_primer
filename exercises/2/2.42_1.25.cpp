#include <iostream>
#include "2.42_sales_data.h"

int main()
{
    Sales_data sum, data;
    double price = 0;

    if (!(std::cin >> sum.book_no >> sum.units_sold >> price))
    {
        std::cerr << "No data" << std::endl;
        return 1;
    }

    sum.revenue = sum.units_sold * price;

    while(std::cin >> data.book_no >> data.units_sold >> price)
    {
        data.revenue = data.units_sold * price;

        if (sum.book_no == data.book_no)
        {
            sum.units_sold += data.units_sold;
            sum.revenue += data.revenue;
        }
        else
        {
            std::cout << sum.book_no << " " << sum.units_sold << " " << sum.revenue << " " << sum.revenue / sum.units_sold << std::endl;

            sum.book_no = data.book_no;
            sum.units_sold = data.units_sold;
            sum.revenue = data.revenue;
        }
    }

    std::cout << sum.book_no << " " << sum.units_sold << " " << sum.revenue << " " << sum.revenue / sum.units_sold << std::endl;
    return 0;
}