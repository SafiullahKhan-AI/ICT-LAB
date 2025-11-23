#include <iostream>
using namespace std;

class PatientMonitor{
private:
    int heartRate;      
    int oxygenLevel;   

public:
    void setHeartRate(int hr){
        if(hr >= 30 && hr <= 180){
            heartRate = hr;
            cout << "Heart Rate Updated\n";
        } 
        else{
            cout << "Invalid Heart Rate! Must be between (30-180)\n";
        }
    }
    void setOxygenLevel(int ox){
        if (ox >= 50 && ox <= 100) {
            oxygenLevel = ox;
            cout << "Oxygen Level Updated.\n";
        } 
        else{
            cout << "Invalid Oxygen Level! Must be between (50-100)\n";
        }
    }
    void showStatus(){
        cout << "\n--- Patient Monitor Status ---\n";
        cout << "Heart-Rate: " << heartRate << " bpm\n";
        cout << "Oxygen-Level: " << oxygenLevel << "%\n";
        cout << "Condition: ";

        if(oxygenLevel < 80){
            cout << "Critical Alert\n";
        }
        else if(heartRate < 40 || heartRate > 150) {
            cout << "Abnormal Heart Rate\n";
        }
        else{
            cout << "Stable\n";
        }
    }
};

int main() {
    PatientMonitor p;
    p.setHeartRate(120);    
    p.setOxygenLevel(80);   
    p.setHeartRate(25);     
    p.setOxygenLevel(110);
    p.showStatus();
    return 0;
}
