#include <iostream>
using namespace std;

class Compressor {
public:
    virtual void compress(double size) {}
};

class TextCompressor : public Compressor {
public:
    void compress(double size) override {
        cout << "Text: " << size << " -> " << size * 0.4 << " MB" << endl;
    }
};

class ImageCompressor : public Compressor {
public:
    void compress(double size) override {
        cout << "Image: " << size << " -> " << size * 0.7 << " MB" << endl;
    }
};

int main() {
    TextCompressor t;
    ImageCompressor i;
    t.compress(100);
    i.compress(100);
    return 0;
}
