#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int plusFunction (int x, int y) {
    return x * y;
}

double plussFunction ( double x, double y) {
    return x + y;
}
//--------------------------------------------------------

int recursion ( int n) {
    if (n <= 1) {
        return 1;
    }
    else {
    return n + recursion (n - 1);
    }
}


int main() {


    int number;
    cout << "Type the number which we need to calculate: " << "\n";
    cin >> number;
    cout << "The number you just type is " << number << " is " << recursion(number) << "\n";
    return 0;

//-----------------------------------------------------------

    int intNumber = plusFunction (9, 32);
    double doubleNumber = plussFunction (99, 2);

    cout << "The number of integer is: " << intNumber << "\n";
    cout << "The number of double is: " << doubleNumber << "\n";
}