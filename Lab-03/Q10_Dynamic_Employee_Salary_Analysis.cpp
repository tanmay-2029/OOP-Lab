#include <iostream>
using namespace std;

class Employee {
private:
    int employeeID;
    string employeeName;
    float basicSalary;
    int numMonths;
    float *earnings;

public:
    Employee() {
        earnings = nullptr;
    }

    void accept() {
        cout << "Enter Employee ID: ";
        cin >> employeeID;

        cout << "Enter Employee Name: ";
        cin >> employeeName;

        cout << "Enter Basic Salary: ";
        cin >> basicSalary;

        cout << "Enter Number of Months: ";
        cin >> numMonths;

        earnings = new float[numMonths];

        cout << "\nEnter monthly earnings:\n";

        for (int i = 0; i < numMonths; i++) {
            cout << "Month " << i + 1 << ": ";
            cin >> earnings[i];
        }
    }

    void display() {
        float total = 0;
        int highestMonth = 0;

        for (int i = 0; i < numMonths; i++) {
            total += earnings[i];

            if (earnings[i] > earnings[highestMonth]) {
                highestMonth = i;
            }
        }

        float average = total / numMonths;

        cout << "\n----- Employee Details -----\n";

        cout << "Employee ID: " << employeeID <<endl;
        cout << "Employee Name: " << employeeName << endl;
        cout << "Basic Salary: " << basicSalary << endl;

        cout << "\nMonthly Earnings:\n";

        for (int i = 0; i < numMonths; i++) {
            cout << "Month " << i + 1 << ": "
                 << earnings[i] << endl;
        }

        cout << "\nTotal Earnings: " << total << endl;
        cout << "Average Monthly Earning: " << average << endl;

        cout << "Highest Earning: "
             << earnings[highestMonth] << endl;

        cout << "Highest Earning Month: "
             << highestMonth + 1 << endl;
    }
    
    ~Employee() {
        delete[] earnings;
    }
};

int main() {
    Employee emp;

    emp.accept();
    emp.display();

    return 0;
}
