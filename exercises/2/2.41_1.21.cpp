#include <iostream>

struct Sales_data
{
    std::string book_no;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

int main()
{
    Sales_data data1, data2;
    double price = 0;

    std::cin >> data1.book_no >> data1.units_sold >> price;
    data1.revenue = data1.units_sold * price;

    std::cin >> data2.book_no >> data2.units_sold >> price;
    data2.revenue = data2.units_sold * price;

    if (data1.book_no != data2.book_no)
    {
        std::cerr << "ISBN is not same" << std::endl;
        return 1;
    }

    unsigned total_units_sold = data1.units_sold + data2.units_sold;
    double total_revenue = data1.revenue + data2.revenue;

    if (!total_units_sold)
    {
        std::cerr << "No units sold" << std::endl;
        return 1;
    }

    std::cout << data1.book_no << " " << total_units_sold << " " << total_revenue << " " << total_revenue / total_units_sold << std::endl;
    return 0;
}