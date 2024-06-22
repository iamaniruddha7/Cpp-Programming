#include<iostream>
using namespace std;

void wishes(string name, int age)
{
    cout << "Happy Birthday " << name << "\n";
    cout << "Your age is " << age;
}

int main()
{
    string name = "Aniruddha";
    int age = 21;
    wishes(name,age);
    return 0;
}