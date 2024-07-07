#include <iostream>
#include <string>
#include <cmath>

using namespace std;

/*enum level {
    low,
    medium,
    high
};*/


void myFunction(int myNumber[5]) {
    for(int i = 0; i < 5; i++) {
        cout << myNumber[i] << "\n";
    }
}

/*void swapNums(int &x, int &y) {
    int z = x;
    x = y;
    y = z;
}*/


int main() {
    int myNumber [5] = {3, 5, 7, 8, 10};
    myFunction(myNumber);
    return 0;
    
    /*int firstsum = 20;
    int secondsum = 30;

    cout << "Sums before swap" << "\n";
    cout << firstsum << secondsum << "\n";

    swapNums(firstsum, secondsum);

    cout << "After swaping" << "\n";

    cout << firstsum << secondsum << "\n";*/




/*enum level myVar = medium;

switch (myVar) {
    case 0:
    cout << "You Chose" << myVar;
    break;
    case 1:
    cout << "Choose " << myVar;
    break;
    case 2:
    cout << "Choooseee" << myVar;
    break;
}
return 0;*/

int numbers[5] = {23,37,24,15,86};
for (int i = 0; i < sizeof(numbers) / sizeof(int); i++) {
    cout << numbers[i] << "\n";
}

//----------------------------------------------------------------------------


struct {
    string brand;
    string country;
    int year;
}myStruct1, myStruct2;

myStruct1.brand = "Honda";
myStruct1.country = "Canada";
myStruct1.year = 2018;

cout << myStruct1.brand << " " << myStruct1.country << " " << myStruct1.year << "\n";


myStruct2.brand = "Toyota";
myStruct2.country = "USA";
myStruct2.year = 2024;

cout << myStruct2.brand << "\n";
cout << myStruct2.country << "\n";
cout << myStruct2.year << "\n";

//-------------------------------------------------------------------------------------

string food = "Mazda";
string &morning = food;
string* name = &food;

cout << food << "\n";
cout << &morning << "\n";
cout << name << "\n";

*name = "Canada";

cout << *name << "\n";

}