#include<iostream>
using namespace std;

int main()
{
    
    char *pgrades = NULL;
    int size;

    cout << "How many grades you want to enter in ? \n";
    cin >> size;

    pgrades = new char[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter Grade #" << i+1 << ": " << '\n';
        cin >> pgrades[i];
    }

    for (int i = 0; i < size; i++)
    {
        cout << pgrades[i] << " ";
    }
    
    delete[] pgrades;
    
    return 0;
}