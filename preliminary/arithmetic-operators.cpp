// arithmetic operators return the result of a specific arithmetic operation
#include <iostream>
using std::cout;


using num = int;
using fl = float;

int main(){
    num students = 20;
    //students = students + 1;
    // shorten too
    students += 1;
    students -= 1;
    students /= 2;
    students *= 2;

    fl remainder = students % 2;



    cout << remainder;
}