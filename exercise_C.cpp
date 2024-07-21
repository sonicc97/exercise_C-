#include <iostream>
#include <string>
#include <cmath>

using namespace std;
/*
class Car {
    public:
    string brand;
    string model;
    int year;
    Car(string x, string y, int z);
};

Car::Car(string x, string y, int z) {
    brand = x;
    model = y;
    year = z;
}
*/


class salary {
    private:
    int salary;

    public:
    void setSalary(int s) {
        salary = s;
    };

    int getSalary() {
        return salary;
    }
};

int main() {

    salary mySalary;
    mySalary.setSalary(120320);
    cout << mySalary.getSalary();
    return 0;



    /*Car carObj1("Mazda", "USA", 2012);
    Car carObj2("KIA", "CANADA", 1997);

    cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
    cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
*/


}




