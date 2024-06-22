#include<iostream>
using namespace std;

class Humans{
    public:
    string name;
    string job;
    int age;

    Humans(string x, string y, int z){
        name = x;
        job = y;
        age = z;
    }

};


int main(){
    Humans h1("Aniruddha","Student",21);
    cout << '\n';
    cout << h1.name << '\n';
    cout << h1.job << '\n';
    cout << h1.age << '\n';
    cout << '\n';
    return 0;
}