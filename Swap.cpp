#include<iostream>

using namespace std;

void swap(string &x, string &y)
{
    string temp;
    temp = x;
    x = y;
    y = temp;
}
int main()
{
    string x = "Aniruddha";
    string y = "Chicken-Popcorn";

    swap(x, y);

    cout << "X: " << x << '\n';
    cout << "Y: " << y << '\n';
    
    return 0;
}