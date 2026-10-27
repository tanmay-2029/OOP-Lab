#include <iostream>
using namespace std;

class CloudResource {
public:
    virtual void calculateCost(double h) {}
};

class StandardInstance : public CloudResource {
public:
    void calculateCost(double h) override {
        double cost = h * 5;
        if (h > 100) cost *= 0.85;
        cout << "Standard cost: Rs. " << cost << endl;
    }
};

class PremiumInstance : public CloudResource {
public:
    void calculateCost(double h) override {
        double cost = h * 12;
        if (h > 100) cost *= 0.85;
        cout << "Premium cost: Rs. " << cost << endl;
    }
};

int main() {
    StandardInstance s;
    PremiumInstance p;
    s.calculateCost(120);
    p.calculateCost(120);
    return 0;
}
