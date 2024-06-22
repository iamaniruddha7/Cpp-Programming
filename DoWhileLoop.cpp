#include<iostream>
using namespace std;

int main()
{
    int num;
    do
    {
        cout << "Enter A positive number: ";
        cin >> num;
    } while (num < 0);
    
    return 0;
}