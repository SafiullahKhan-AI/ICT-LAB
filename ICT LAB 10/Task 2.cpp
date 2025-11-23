#include <iostream>
#include <string>
using namespace std;

class Member{
private:
    string name;
    int validmonths;

public:
    Member(string membername, int months){
        name = membername;
        validmonths = months;
    }
    void extendValidity(int months) {
        validmonths += months;
    }
    void showDetails(){
        cout << "Member Name: " << name << endl;
        cout << "Validity (months): " << validmonths << endl;
    }
};

int main() {

    Member m1("Ali", 10);
    Member m2("Ahmed", 15);

    m1.extendValidity(5);   
    m2.extendValidity(10);  

    cout << "Updated Membership Details" << endl;
    m1.showDetails();
    m2.showDetails();
    return 0;
}
