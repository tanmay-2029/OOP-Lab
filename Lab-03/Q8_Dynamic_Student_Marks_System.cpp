#include <iostream>
using namespace std;

class Student {
private:
    int rollNumber;
    string name;
    int numSubjects;
    float *marks;

public:

    Student() {
        marks = nullptr;
    }
    
    void acceptDetails() {
        cout << "Enter Roll Number: ";
        cin >> rollNumber;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Number of Subjects: ";
        cin >> numSubjects;
        
        marks = new float[numSubjects];
        
        cout << "Enter marks for " << numSubjects << " subjects:\n";

        for (int i = 0; i < numSubjects; i++) {
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[i];
        }
    }
    
    void displayResult() {
        float total = 0;

        for (int i = 0; i < numSubjects; i++) {
            total += marks[i];
        }

        float average = total / numSubjects;

        cout << "\n----- Student Result -----\n";
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Name: " << name << endl;
        cout << "Number of Subjects: " << numSubjects << endl;

        cout << "Marks: ";
        for (int i = 0; i < numSubjects; i++) {
            cout << marks[i] << " ";
        }

        cout << "\nTotal Marks: " << total << endl;
        cout << "Average Marks: " << average << endl;
    }
    
    ~Student() {
        delete[] marks;
    }
};

int main() {
    Student student;

    student.acceptDetails();
    student.displayResult();

    return 0;
}