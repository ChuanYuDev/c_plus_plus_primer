#include "Sales_item.h"
#include <iostream>

Sales_item add_items(const Sales_item& item1, const Sales_item& item2){
    if (!compareIsbn(item1, item2)){
        std::cerr << "isbn is not same" << std::endl;
        return Sales_item();
    }
    return item1 + item2;
}

int main(){
    Sales_item item1, item2, item;
    std::cin >> item1 >> item2;
    item = add_items(item1, item2);
    std::cout << item << std::endl;
    return 0;
}