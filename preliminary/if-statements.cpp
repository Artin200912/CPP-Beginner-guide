// in a if statement, a peace of code would be executed if a certain condition is True
#include <iostream>
using std::cout;
using std::cin;

using nm = int;

int main()
{
    nm age;
    cout << "Enter your age";
    cin >> age;

    if (age > 15) {
        cout << "Ok";
    }
    else if (age < 15){
        cout << "You have to be at least 15 to enter";
    }
    else{
        cout << "ok2 ";
    }

    return 0;
}