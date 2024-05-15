// ternary operator ?: replacement to an if/else statement . condition ? expression1 : expression2
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

using nm = int;
int main() {
    nm grade;
    cout << "Enter your grade : ";
    cin >> grade;

    (grade >=60) ? cout << "You pass!"<< endl : cout << "You Fail." << endl;

    nm num;
    cout << "Enter an integer : ";
    cin >> num;

    (num % 2 == 0) ? cout << "The number you entered is even" : cout << "The number you entered is odd" ;


    return 0;
}