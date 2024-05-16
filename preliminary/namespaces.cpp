// with  namespaces, you can define multiple versions of a variable
#include <iostream>
using std::cout;


namespace first{
    int x = 1;
}

int main() {
    // if you write this : cout << x
    using namespace first;

    // its accessible using this too
    cout << first::x;
}
