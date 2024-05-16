// its good to define your function before the main function
// you cant use variables defined in other functions in main function or backward
// function = a block of reusable code
#include <iostream>
using namespace std;
using namespace std;


void HappyBirthday(string name, int age){
    cout << "Happy birthday to you" <<  name << " " << endl;
    cout << "Happy birthday to you" << name << " " << endl;
    cout << "Happy birthday to you" <<  name << " " << endl;
    cout << "Happy birthday to you" <<  name << " " << endl;
    cout << age;

}

double square(double length){
    double result = length * length;
    return result;
}

int main()
{


//    string name = "Artin";
//    int age = 15;
//    HappyBirthday(name, age);

    double length = 5.0;
    double area = square(length);

    cout << area;


    return 0;
}