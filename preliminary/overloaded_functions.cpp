#include <iostream>
using namespace std;


string BakePizza(string::topping1){
    cout << "Here is your pizza\n" << "with extra topping " << topping1;
}

int main(){

    string topping1 = "Pepperoni";
    BakePizza(topping1);

    return 0;
}


