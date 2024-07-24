#include <iostream>
#include <string>
#include <cmath>
#include <fstream>

using namespace std;


int main() {

try {
  int age = 15;
  if (age >= 18) {
    cout << "Access granted - you are old enough." << "\n";
  } else {
    throw (age);
  }
}
catch (int myNum) {
  cout << "Access denied - You must be at least 18 years old." << "\n";
  cout << "Age is: " << myNum << "\n\n\n";
}



---------------------------------------------------------------------------



try {
  int age = 15;
  if (age >= 18) {
    cout << "Access granted - you are old enough.";
  } else {
    throw 505;
  }
}
catch (int myNum) {
  cout << "Access denied - You must be at least 18 years old.\n";
  cout << "Error number: " << myNum;

}
}




