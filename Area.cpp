#include<iostream>
using namespace std;

double square(double length)
{
    return length * length;
}

int main()
{
    double length = 5;
    double Area = square(length);
    cout << "\n" << "Area: " << Area << "cm^2\n";
    return 0;
}