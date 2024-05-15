#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    double temp;
    char unit;

    cout << "Enter the unit you would like to convert to (C=celsius, F=Fahrenheit: " << endl;
    cin >> unit;

    if (unit == 'F' || unit == 'f') {
        cout << "Enter the temp in cls : " << endl;
        cin >> temp;

        temp = (1.8 * temp) + 32.0;
        cout << "Temp is " << '\t' << temp << 'F' << endl;
    }

    else if (unit == 'C' || unit == 'c') {
        cout << "Enter the temp in frn : " << endl;
        cin >> temp;

        temp = (temp - 32) / 1.8;
        cout << "Temp is " << '\t' << temp << 'C' << endl;
    }
    else {
        cout << "Pls enter only C or F as temp";
    }

    return 0;
}