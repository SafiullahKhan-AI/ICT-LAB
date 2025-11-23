#include <iostream>
#include <string>
using namespace std;

class Order{
private:
    string studentName;
    string meals[3]; 
    int counter = 0;

public:
    void setName(string name){
        studentName = name;
    }
    void addMeal(string meal){
        if(counter < 3){
            meals[counter] = meal;
            counter++;

            cout << "Meal added: " << meal << endl;
            cout << "Remaining slots: " << (3 - counter) << endl << endl;
        } 
        else{
            cout << "Cannot added \"" << meal 
                 << "\" — limit is reached!" << endl << endl;
        }
    }
    void showMeals(){
        cout << "Student Name: " << studentName << endl;
        cout << "Meals (" << counter << "):" << endl;

        for (int i = 0; i < counter; i++){
            cout << "- " << meals[i] << endl;
        }
    }
};

int main() {
    Order m1;
    m1.setName("Ali");
    m1.addMeal("Burger");
    m1.addMeal("Chicken Wrap");
    m1.addMeal("Biryani");
    m1.addMeal("French Fries");
    m1.showMeals();
    return 0;
}
