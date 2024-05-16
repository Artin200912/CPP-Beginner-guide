// just some useful math related function
#include <iostream>
#include <cmath>

using std::cout;
using std::max;
using std::min;
using std::endl;
using db = double;


db x = 3;
db y = 4;

namespace first {
    db z = min(x, y);
    db z1 = pow(x, y);
    db z2 = abs(-4);
    db z3 = ceil(x);
}

namespace second {
    db z = max(x, y);
    db z1 = sqrt(y*y);
    db z2 = round(-1*y);
    db z3 = floor(x);
}

int main()
{
    cout << first::z << '\t' << first::z1 << '\t' << first::z2 << '\t' << first::z3 <<  endl ;
    cout << second::z << '\t' << second::z1 << '\t' << second::z2 << '\t' << second::z3;

    return 0;
}


