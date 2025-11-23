#include <iostream>
using namespace std;

class WeatherSensor {
private:
    float temperature;
    float humidity;

public:
    void setTemperature(float t) {
        if(t < -20) temperature = -20;
        else if(t > 60) temperature = 60;
        else temperature = t;
    }

    void setHumidity(float h) {
        if(h < 0) humidity = 0;
        else if(h > 100) humidity = 100;
        else humidity = h;
    }

    void reportStatus() {
        if(temperature < -10 || temperature > 50)
            cout << "Hazardous Weather" << endl;
        else if(humidity < 20 && temperature > 25)
            cout << "Dry and Warm" << endl;
        else
            cout << "Normal Conditions" << endl;
    }
};

int main() {
    WeatherSensor w;

    w.setTemperature(-15);
    w.setHumidity(50);
    w.reportStatus();

    w.setTemperature(30);
    w.setHumidity(10);
    w.reportStatus();

    w.setTemperature(55);
    w.setHumidity(40);
    w.reportStatus();

    w.setTemperature(20);
    w.setHumidity(70);
    w.reportStatus();

    return 0;
}
