#include "Sales_item.h"
#include <iostream>

int main(){
    Sales_item item1, item2;
    int num;
    if (std::cin >> item1){
        num = 1;
        while(std::cin >> item2){
            if (compareIsbn(item1, item2)){
                num += 1;
            }
            else{
                std::cout << item1.isbn() << " " << num << std::endl;
                item1 = item2;
                num = 1;
            }
        }
        std::cout << item1.isbn() << " " << num << std::endl;
    }
    return 0;
}