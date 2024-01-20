#include <iostream>

int main()
{   
    int val, sum = 0;
    std::cout << "Input integers: " << std::endl;

    while (std::cin >> val){
        sum += val;
    }

    std::cout << "Sum of all the integers input is: " << sum << std::endl;

    return 0;
}