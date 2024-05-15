#include <iostream>
using std::cout;
using std::cin;
using std::string;
using std::getline;


using str = string;
int main()
{
    str name;
    cout << "Enter your name : ";
    getline(cin, name); // deletes the spaces

    int length = name.length(); // gives you the number of the characters you entered
    bool empty = name.empty(); // tells you if a string is empty or not
    // name.clear() deletes everything in that str
    name = name.append("@gmail.com"); // adding a string to that certain string
    // name.at(1) you can access the indices of a str
    // name.insert(1, '@') you can change the value of that certain index
    // name.find('the char you want to find in the str')
    // name.erase(0, 3) deletes the first 3 index



}