#include <iostream>
#include <string>
#include <cmath>

using namespace std;

//- It is useful for code reusability: reuse attributes and methods of an existing class when you create a new class.


class animalKingdom {
    public:
    void animalSound() {
        cout << "I like tiger" << "\n";
    }
};

class cat : public animalKingdom {
    public:
    int numberTigers;
    void animalSound() {
        cout << "Tiger is a family of cats" << "\n";
    }
};

class wild : public animalKingdom {
    public:
    void animalSound() {
        cout << "The king of animals is the lion" << "\n";
    }
};


int main() {

    animalKingdom myAnimal;
    cat myCat;
    wild Wildnes;

    myCat.numberTigers = 5574;

    myAnimal.animalSound();
    myCat.animalSound();
    Wildnes.animalSound();
    cout << "The number of \3 tigers \3 in the world is: " <<  myCat.numberTigers << "\n";
    return 0;
}




