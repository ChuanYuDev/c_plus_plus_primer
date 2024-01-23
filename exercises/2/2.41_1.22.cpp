#include <iostream>

struct Sales_data
{
    std::string book_no;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

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

        if (sum.book_no != data.book_no)
        {
            std::cerr << "ISBN is not same" << std::endl;
            return 1;
        }

        sum.units_sold += data.units_sold;
        sum.revenue += data.revenue;
    }

    if (!sum.units_sold)
    {
        std::cerr << "No units sold" << std::endl;
        return 1;
    }

    std::cout << sum.book_no << " " << sum.units_sold << " " << sum.revenue << " " << sum.revenue / sum.units_sold << std::endl;
    return 0;
}