#include <iostream>

int main()
{   
    int v1, v2;

    std::cout << "Enter two integers: " << std::endl;
    std::cin >> v1 >> v2;

    std::cout << "All the numbers between the range specified by these two integers are: " << std::endl;

    if (v1 > v2){
        while (v1 >= v2){
            std::cout << v1 << std::endl;
            --v1;
        }
    }
    else {
        while (v1 <= v2){
            std::cout << v1 << std::endl;
            ++v1;
        }
    }

    return 0;
}