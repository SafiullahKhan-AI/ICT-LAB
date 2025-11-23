#include <iostream>
#include <string>
#include <cctype>
using namespace std;

class Passenger{
public:
    string name;

private:
    int age;
    string seatNumber;

public:
    void setAge(int a) {
        if(a >= 1 && a <= 120){
            age = a;
            cout << "Age is Updated Successfully.\n";
        } 
        else{
            cout << "Invalid age.. Enter between (1-120)\n";
        }
    }
    void setSeatNumber(string seat){
        if (seat.length() < 2){
            cout << "Invalid Seat number format!\n";
            return;
        }
        char lastChar = seat[seat.length() - 1];
        if(!isalpha(lastChar)){
            cout << "Invalid Seat number Format! Must Have a Letter in end \n";
            return;
        }
        for(int i = 0; i < seat.length() - 1; i++){
            if (!isdigit(seat[i])) {
                cout << "Invalid seat number Format! Must Have a Digit in start\n";
                return;
            }
        }
        seatNumber = seat;
        cout << "Seat number Updated Successfully.\n";
    }
    int getAge(){
        return age;
    }
    string getSeatNumber(){
        return seatNumber;
    }
};

int main() {
    Passenger p;
    p.name = "Pedri Gonzalez";
    p.setAge(40);       
    p.setAge(130);    
    p.setSeatNumber("12A");
    p.setSeatNumber("A2A");
    p.setSeatNumber("71");  
    cout << "\nPassenger Details:\n";
    cout << "Name: " << p.name << endl;
    cout << "Age: " << p.getAge() << endl;
    cout << "Seat: " << p.getSeatNumber() << endl;
    return 0;
}
