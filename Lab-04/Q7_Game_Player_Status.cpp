#include <iostream>
using namespace std;

class player{
    private:
    string name;
    int health;
    int score;
    int level;

    public:
    void enter(){
        cout<<"Player Name : ";
        cin>>name;
        cout<<"Health : ";
        cin>>health;
        cout<<"Score : ";
        cin>>score;
        cout<<"Level : ";
        cin>>level;
    }
    friend class manager;
};

class manager{
    public:
    void display(player p){
        cout<<"Name : "<<p.name<<endl;
        cout<<"Health : "<<p.health<<endl;
        cout<<"Score : "<<p.score<<endl;
        cout<<"Level : "<<p.level<<endl;
    }
    void live(player p){
        if(p.health > 0){
            cout<<"Player is Alive"<<endl;
        } else {
            cout<<"Player is Dead"<<endl;
        }
    }
    void level(player p){
        cout<<"Level : "<<p.level<<endl;
        cout<<"Score : "<<p.score<<endl;
    }
};

int main(){
    player p;
    manager g;
    p.enter();
    g.display(p);
    g.live(p);
    g.level(p);
    return 0;
}