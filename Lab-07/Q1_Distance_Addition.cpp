#include <iostream>
using namespace std;

class Distance {
private:    
    int feet;
    int inches;
    
public:

    Distance(int f = 0, int i = 0) {
        feet = f;
        inches = i;
    }

    Distance operator+(Distance d) {
        Distance temp;

        temp.feet = feet + d.feet;
        temp.inches = inches + d.inches;

        if (temp.inches >= 12) {
            temp.feet++;
            temp.inches -= 12;
        }

        return temp;
    }

    void display() {
        cout << feet << " feet " << inches << " inches" << endl;
    }
};

int main() {
    Distance d1(5, 8);
    Distance d2(3, 7);

    cout << "distance 1 : ";
    d1.display();
    cout << "distance 2 : ";
    d2.display();

    Distance d3 = d1 + d2;

    cout << "result : ";
    d3.display();

    return 0;
}