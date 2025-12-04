#include <iostream>
using namespace std;

class Employee {
protected:
    int employeeID;
    float salary;

public:
    Employee(int id, float sal) {
        employeeID = id;
        salary = sal;
    }
};

class PartTimeEmployee : protected Employee {
private:
    int hoursWorked;

public:
    PartTimeEmployee(int id, float sal, int hrs) : Employee(id, sal) {
        hoursWorked = hrs;
    }
    float calculateSalary() {
        return salary * hoursWorked; 
    }

    void display() {
        cout << "Employee ID: " << employeeID << endl;
        cout << "Hours Worked: " << hoursWorked << endl;
        cout << "Total Salary: " << calculateSalary() << endl;
    }
};
int main() {
    PartTimeEmployee p1(101, 500, 6); 
    p1.display();
    return 0;
}
