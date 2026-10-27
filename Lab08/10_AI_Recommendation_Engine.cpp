#include <iostream>
using namespace std;

class Recommender {
public:
    virtual void generateRecommendation(int r, int p) {}
};

class PersonalizedRecommender : public Recommender {
public:
    void generateRecommendation(int r, int p) override {
        cout << "Personalized score: " << 0.7 * r + 0.3 * p << endl;
    }
};

class TrendingRecommender : public Recommender {
public:
    void generateRecommendation(int r, int p) override {
        cout << "Trending score: " << 0.3 * r + 0.7 * p << endl;
    }
};

int main() {
    PersonalizedRecommender p;
    TrendingRecommender t;

    Recommender *r;
    r = &p;
    r->generateRecommendation(80, 60);

    r = &t;
    r->generateRecommendation(80, 60);

    return 0;
}
