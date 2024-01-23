#include <string>
#include <iostream>

struct Sales_data
{
    std::string book_no;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

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