#include <iostream>
#include <string>
using namespace std;

class Animal {
protected:
    string name;

public:
    Animal(string n) {
        name = n;
    }

    void makeSound() {
        cout << name << " makes a generic animal sound." << endl;
    }
};

class Dog : public Animal {
public:
    Dog(string n) : Animal(n) {}

    void bark() {
        cout << name << " Barks: Woof!" << endl;
    }
};

int main() {
    Animal a("GenericAnimal");
    a.makeSound();

    cout << endl;
    Dog d("Buddy");
    d.makeSound();  
    d.bark();     

    return 0;
}
