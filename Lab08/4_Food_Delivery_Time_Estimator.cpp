#include <iostream>
using namespace std;

class Delivery {
public:
    virtual void estimateTime(double d) {}
};

class BikeDelivery : public Delivery {
public:
    void estimateTime(double d) override {
        cout << "Bike time: " << d / 20 * 60 + 5 << " minutes" << endl;
    }
};

class DroneDelivery : public Delivery {
public:
    void estimateTime(double d) override {
        cout << "Drone time: " << d / 40 * 60 + 2 << " minutes" << endl;
    }
};

int main() {
    BikeDelivery b;
    DroneDelivery d;
    b.estimateTime(10);
    d.estimateTime(10);
    return 0;
}
