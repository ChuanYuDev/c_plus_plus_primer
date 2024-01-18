#include "Sales_item.h"
#include <iostream>

int main(){
    Sales_item item;
    if (std::cin >> item){
        Sales_item sum(item);
        while(std::cin >> item){
            sum += item;
        }
        std::cout << sum << std::endl;
    }
}