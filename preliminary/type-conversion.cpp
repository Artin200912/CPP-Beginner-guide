// type conversion = conversion a value of one data type to another,
// Implicit = automatic, Explicit = Precedes value with new data type

#include <iostream>
using std::cout;

using num = int;
using db = double;

int main(){
    //db x = (num) 3.14;
    //cout << x;

    num correct = 8;
    num questions = 10;

    double score = (correct/(double)questions) * 100;

    cout << score << '%';

}