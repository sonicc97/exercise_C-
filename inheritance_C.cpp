#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class myFirstCar {
    public:
    void brand() {
        cout << "My favorite car is Mazda" << "\n";
    }
};

class secondCar: public myFirstCar{
    protected:
    string name = "Mazda 3";
    public:
    string getName() {
        return name;
    }
};

class thre: public secondCar {
    public:
    int year = 2010;
    public:
    int getYear() {
        return year;
    }
};


int main() {

    thre myCars;
    myCars.brand();
    cout << "The name of car is:" << myCars.getName() << "\n";
    cout << "and year is:" << myCars.getYear() << "\n";
    return 0;


---------------------------------------------------------------------

}

// Base class
/*
class MyClass {
  public:
    void myFunction() {
      cout << "Some content in parent class." ;
    }
};

// Another base class
class MyOtherClass {
  public:
    void myOtherFunction() {
      cout << "Some content in another class." ;
    }
};

// Derived class
class MyChildClass: public MyClass, public MyOtherClass {
};

int main() {

  MyChildClass myObj;
  myObj.myFunction();
  myObj.myOtherFunction();
  return 0;
}
*/




