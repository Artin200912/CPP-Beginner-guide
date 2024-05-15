// while loops are useful when your trying to loop through something or you want to force the program to do something
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;


using str = string;
int main()
{

    str name;

    while (name.empty()){
        cout << "Enter your name : ";;
        std::getline(cin, name);
    }
    cout << "hello " << name;


    return 0;
}

