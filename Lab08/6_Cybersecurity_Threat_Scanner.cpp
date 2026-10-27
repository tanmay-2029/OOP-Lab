#include <iostream>
using namespace std;

class SecurityScanner {
public:
    virtual void scan(int threats) {}
};

class BasicScanner : public SecurityScanner {
public:
    void scan(int t) override {
        cout << "Threats detected: " << t << endl;
    }
};

class AdvancedScanner : public SecurityScanner {
public:
    void scan(int t) override {
        cout << "Threats detected: " << t << endl;
        cout << "Threats remaining: " << t * 0.1 << endl;
    }
};

int main() {
    BasicScanner b;
    AdvancedScanner a;
    b.scan(100);
    a.scan(100);
    return 0;
}
