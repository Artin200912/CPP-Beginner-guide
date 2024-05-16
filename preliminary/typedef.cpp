// typedef = reversed keyword used to create an additional nickname for a certain datatype, so you can use your nickname for declaring variables in that dtype
#include <iostream>
#include <vector>
using std::cout;
using std::string;

typedef string text;
typedef int num;

// can also do it like this one here
using num = int;

int main(){
    text name = "Artin";
    num age = 15;
    cout<< name << '\t'<<  "Has " << age<< '\n';
};