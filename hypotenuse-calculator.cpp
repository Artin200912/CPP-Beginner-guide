// training project
#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;

using db = double;

int main() {
    db a;
    db b;
    db c;

    cout << "Enter side A: ";
    cin >> a;

    cout << "Enter side B: ";
    cin >> b;

    c = sqrt(pow(a, 2) + pow(b, 2));

    cout << "Side C is : " << '\t' << c << endl;

    return 0;
}