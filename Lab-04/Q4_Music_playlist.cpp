#include <iostream>
using namespace std;

class song{
    private:
    string name;
    string artist;
    int duration;

    public:
    void enter(){
        cout<<"Song Name : ";
        cin>>name;
        cout<<"Artist Name : ";
        cin>>artist;
        cout<<"Duration : ";
        cin>>duration;
    }

    friend void compare(song s1, song s2);
};

void compare(song s1, song s2){
    if(s1.duration > s2.duration){
        cout<<s1.name<<" is longer than "<<s2.name<<endl;
    } else if(s2.duration > s1.duration){
        cout<<s2.name<<" is longer than "<<s1.name<<endl;
    } else {
        cout<<"Both songs have the same duration"<<endl;
    }
}

int main(){
    song s1, s2;
    cout<<"Song 1 : "<<endl;
    s1.enter();
    cout<<"Song 2 : "<<endl;
    s2.enter();
    compare(s1, s2);
    return 0;
}