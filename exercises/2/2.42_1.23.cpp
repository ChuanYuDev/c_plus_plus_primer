#include <iostream>
#include "2.42_sales_data.h"

int main()
{
    Sales_data current_data, data;
    double price = 0;
    int num = 0;

    if (!(std::cin >> current_data.book_no >> current_data.units_sold >> price))
    {
        std::cerr << "No data" << std::endl;
        return 1;
    }

    current_data.revenue = current_data.units_sold * price;
    num = 1;

    while(std::cin >> data.book_no >> data.units_sold >> price)
    {
        data.revenue = data.units_sold * price;

        if (current_data.book_no == data.book_no)
            ++num;
        else
        {
            std::cout << current_data.book_no << " " << num << std::endl;

            current_data.book_no = data.book_no;
            current_data.units_sold = data.units_sold;
            current_data.revenue = data.revenue;
            num = 1;
        }
    }

    std::cout << current_data.book_no << " " << num << std::endl;
    return 0;
}