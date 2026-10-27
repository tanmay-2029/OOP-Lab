#include <iostream>
using namespace std;

class Robot {
public:
    virtual void move(double d) {}
};

class WheeledRobot : public Robot {
public:
    void move(double d) override {
        cout << "Wheeled robot time: " << d / 2 << " seconds" << endl;
    }
};

class TrackedRobot : public Robot {
public:
    void move(double d) override {
        cout << "Tracked robot time: " << d / 1.2 << " seconds" << endl;
    }
};

int main() {
    WheeledRobot w;
    TrackedRobot t;

    Robot *r;
    r = &w;
    r->move(10);

    r = &t;
    r->move(10);

    return 0;
}
