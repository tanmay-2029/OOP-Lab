#include <iostream>
using namespace std;

class Employee {
private:
    int employeeID;
    string employeeName;
    float salary;

public:
    void accept() {
        cout<<"Enter Employee ID: ";
        cin>>employeeID;

        cout<<"Enter Employee Name: ";
        cin>>employeeName;

        cout<<"Enter Salary: ";
        cin>>salary; 
    }
    
    void display() {
        cout << "Employee ID: " << employeeID << endl;
        cout << "Employee Name: " << employeeName << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    int n;

    cout << "Enter number of employees: ";
    cin >> n;
    
    Employee *employees = new Employee[n];
    
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details of Employee " << i + 1 << ":\n";
        employees[i].accept();
    }

    cout << "\n--- Employee Details ---\n";

    for (int i = 0; i < n; i++) {
        cout << "\nEmployee " << i + 1 << ":\n";
        employees[i].display();
    }

    delete[] employees;

    return 0;
}