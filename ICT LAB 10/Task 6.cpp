#include <iostream>
#include <string>
using namespace std;

class Attendance{
private:
    string clockInTime;
    string clockOutTime;
    bool setin = false;
    bool setout = false;

public:
    void setClockIn(string time){
        if (!setin){
            clockInTime = time;
            setin = true;
        } 
        else{
            cout << "Clock-in time already recorded. Cannot overwrite!" << endl;
        }
    }
    void setClockOut(string time){
        if (!setout){
            clockOutTime = time;
            setout = true;
        } 
        else{
            cout << "Clock-out time already recorded. Cannot overwrite!" << endl;
        }
    }
    string getClockIn(){
        return clockInTime;
    }
    string getClockOut(){
        return clockOutTime;
    }
};

int main() {
    Attendance emp1;
    emp1.setClockIn("9:00 AM");
    emp1.setClockOut("05:00 PM");
    emp1.setClockIn("08:00 AM");   
    emp1.setClockOut("04:00 PM");  
    cout << "\nEmployee Attendance Log:" << endl;
    cout << "Clock In:  " << emp1.getClockIn() << endl;
    cout << "Clock Out: " << emp1.getClockOut() << endl;
    return 0;
}
