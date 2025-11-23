#include <iostream>
#include <string>
using namespace std;

class Patient {
private:
    int age;
    string disease;

public:
    void setAge(int a){
        if (a > 0)
            age = a;
        else
            cout << "Invalid age..." << endl;
    }
    void setDisease(string d){
        disease = d;
    }
    int getAge(){
        return age;
    }
    string getDisease(){
        return disease;
    }
};

int main() {
    Patient p1;
    p1.setAge(14);
    p1.setDisease("Chicken Pox");
    cout << "Patient Age: " << p1.getAge() << endl;
    cout << "Disease: " << p1.getDisease() << endl;
    return 0;
}
