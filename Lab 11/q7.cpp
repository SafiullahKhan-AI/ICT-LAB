#include <iostream>
using namespace std;

class Printer {
public:
    void printInfo(string name) {
        cout << "Name: " << name << endl;
    }
    void printInfo(string name, int age) {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
    void printInfo(string name, int age, string city) {
        cout << "Name: " << name << ", Age: " << age << ", City: " << city << endl;
    }
};

int main() {
    Printer p;
    p.printInfo("Ali");                       
    p.printInfo("Sara", 21);                     
    p.printInfo("Hamza", 25, "Karachi");     

    return 0;
}
