#include<iostream>
using namespace std;

int main()
{
    string name = "Aniruddha";
    int age = 21;
    string pizza[3] = { "Pizza1", "Pizza2", "Pizza3"};

    string *pName = &name;
    int *pAge = &age;
    string *FreePizza = pizza;

    cout << *pName << '\n';
    cout << *pAge << '\n';
    cout << *FreePizza << '\n';

    return 0;
}