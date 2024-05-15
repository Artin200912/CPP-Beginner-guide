#include <iostream>
using namespace std;

int main()
{
    // for loop is used to run a block of code a certain amount of times
    // break = break out of a loop if a condition is True
    // continue = skips the current iteration
    for(int i = 1; i <= 10; i++){
        if (i == 7){
            continue;
        }
        else if (i == 10){
            break;
        }
        cout << i << " ";
    }
}