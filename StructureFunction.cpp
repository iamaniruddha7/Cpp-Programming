#include<iostream>
using namespace std;

struct Car{
    string name;
    int year;
    string color;
};

void printcar(Car &car);

int main(){
    Car car1;
    Car car2;

    car1.name = "Mustang";
    car1.year = 2002;
    car1.color = "Black";
    
    car2.name = "Baleno";
    car2.year = 2014;
    car2.color = "Blue";

    printcar(car1);
    printcar(car2);

    cout << &car1 << '\n';
    cout << &car2 << '\n';

    return 0;
}

void printcar(Car &car){
    cout << '\n';
    cout << &car << '\n';
    cout << car.name << '\n';
    cout << car.year << '\n';
    cout << car.color << '\n';
    cout << '\n';
}



