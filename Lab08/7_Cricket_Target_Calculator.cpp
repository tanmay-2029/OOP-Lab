#include <iostream>
#include <cmath>
using namespace std;

class MatchFormat {
public:
    virtual void calculateTarget(int score) {}
};

class T20Match : public MatchFormat {
public:
    void calculateTarget(int s) override {
        cout << "T20 target: " << s + ceil(s * 0.01) << endl;
    }
};

class ODIMatch : public MatchFormat {
public:
    void calculateTarget(int s) override {
        cout << "ODI target: " << s + ceil(s * 0.02) << endl;
    }
};

int main() {
    T20Match t;
    ODIMatch o;
    t.calculateTarget(200);
    o.calculateTarget(200);
    return 0;
}
