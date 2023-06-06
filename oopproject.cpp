#include <iostream>
#include <string>
using namespace std;
//made by Uzair, Jahanzaib, Ammar, Anees:

const int MAX_EMPLOYEES = 10;

class Employee {
private:
    int id;
    string name;
    double salary;
    int year;

public:
    Employee(int empId, const string& empName, double empSalary, int joinyear) : id(empId), name(empName), salary(empSalary),year(joinyear) {}

    void display() {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: $" << salary <<endl;
         cout<<"Enter Your Joining Year:"<<year<<endl;
    }
};

void inputEmployeeDetails(Employee*& emp) {
    int id;
    string name;
    double salary;
    int year;

    cout << "Enter Employee ID: ";
    cin >> id;

    cout << "Enter Employee Name: ";
    cin >> name;

    cout << "Enter Employee Salary: $";
    cin >> salary;
    cout<<"enter joining year: ";
    cin>>year;
    emp = new Employee(id, name, salary,year);
}

int main() {
    Employee* employees[MAX_EMPLOYEES];

    cout << "Enter details for 10 employees:" << endl;

    for (int i = 0; i < MAX_EMPLOYEES; i++) {
        cout << "Employee " << i + 1 << ":" <<endl;
        inputEmployeeDetails(employees[i]);
    }

    cout << "----- Employee Details -----" << endl;
    for (int i = 0; i < MAX_EMPLOYEES; i++) {
        cout << "Employee " << i + 1 << ":" << endl;
        employees[i]->display();
        cout << "---------------------------" <<endl;
    }

    
    for (int i = 0; i < MAX_EMPLOYEES; i++) {
        delete employees[i];
    }

    return 0;
}

