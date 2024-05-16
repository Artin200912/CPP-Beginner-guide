#include <iostream>
using std::cin;
using std::cout;
using std::endl;


int main() {
    // && checks if 2 conditions are True
    // || checks if at least one of the 2 conditions is True
    // ! = reveres the logical state of its operand

    int temp;
    cout << "Enter the temp : ";
    cin >> temp;

    (temp > 0 && temp < 30) ? cout << "The temp is good" << endl : cout << "The temp is bad" << endl;
    (temp <= 0 || temp >= 30) ? cout << "The Temp is bad" << endl : cout << "The temp is bad" << endl;

    bool sunny = 1;
    (sunny != 1) ? cout << "It is sunny outside" << endl : cout << "Its Cloudy outside" << endl;
}