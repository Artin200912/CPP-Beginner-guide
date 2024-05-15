#include <iostream>


int main()
{
    // do while loop = do some block of code once, then repeat that if condition is right

    int number;

    do{
        std::cout << "Enter a + number : ";
        std::cin >> number;
    }
    while(number < 0);


    return 0;
}