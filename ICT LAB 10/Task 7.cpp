#include <iostream>
#include <string>
using namespace std;

class Student{
private:
    string name;
    int studentID;
    string registeredCourses[5];
    int counter = 0;

public:
    void setInfo(string n, int id){
        name = n;
        studentID = id;
    }
    void addCourse(string courseName){
        if (counter < 5) {
            registeredCourses[counter] = courseName;
            counter++;

            cout << "Course added: " << courseName << endl;
            cout << "Remaining slots: " << (5 - counter) << endl;
        } 
        else{
            cout << "Cannot be Added!Limit is reached." << endl;
        }
    }

    void showDetails(){
        cout << "\nStudent Name: " << name << endl;
        cout << "Student ID: " << studentID << endl;
        cout << "Registered Courses (" << counter << "):" << endl;

        for (int i = 0; i < counter; i++){
            cout << "- " << registeredCourses[i] << endl;
        }
    }
};

int main() {
    Student s1;
    s1.setInfo("Safiullah Khan", 36);
    s1.addCourse("Calculus");
    s1.addCourse("Programming Fundamentals");
    s1.addCourse("Applied Physics");
    s1.addCourse("English");
    s1.addCourse("Islamic Studies");
    s1.addCourse("ICP");
    s1.showDetails();
    return 0;
}
