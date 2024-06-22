#include<iostream>
using namespace std;

class Humans{
    public:
    string name;
    string job;
    int age;

    void eat(){
        cout << "This person is eating" << '\n';
    }
    void gym(){
        cout << "This person is gyming" << '\n';
    }
    void sleep(){
        cout << "This person is sleeping" << '\n';
    }
};


int main(){
    Humans h1;
    h1.name = "Aniruddha";
    h1.job = "Student";
    h1.age = 21;

    cout << '\n';
    cout << h1.name << '\n';
    cout << h1.job << '\n';
    cout << h1.age << '\n';

    h1.eat();
    h1.gym();
    h1.sleep();

    cout << '\n';
    return 0;
}