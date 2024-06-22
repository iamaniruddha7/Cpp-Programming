#include <iostream>
using namespace std;

class Animal
{
public:
    int Dogage = 12;
    int Catage = 9;
    void cute()
    {
        cout << "Cute Pets(Dog/Cat)" << '\n';
    }
    
};

class Dog : public Animal
{
public:
    void eat()
    {
        cout << "The Dog is eating" << '\n';
    }
    void bark()
    {
        cout << "This dog goes wooff!" << '\n';
    }
};

class Cat : public Animal
{
public:
    void eat()
    {
        cout << "The cat is eating" << '\n';
    }
    void meow()
    {
        cout << "This cat goes meoowww!" << '\n';
    }
};

int main()
{
    Dog d1;
    Cat c1;

    cout << '\n';

    d1.cute();

    cout << '\n';

    cout << "Dog's age is: " << d1.Dogage << '\n';
    d1.eat();
    d1.bark();

    cout << '\n';

    c1.cute();

    cout << '\n';

    cout << "Cat's age is: " << c1.Catage << '\n';
    c1.eat();
    c1.meow();

    cout << '\n';

    return 0;
}