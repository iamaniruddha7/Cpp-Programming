#include<iostream>
using namespace std;

int main()
{
    string names[] = {"Aniruddha", "Samidha", "Chinmay"};
    for(string name : names)
    {
        cout << name << '\n';
    }
    int grades[] = {84, 92, 97};
    for(int grade : grades)
    {
        cout << grade << '\n';
    }
    
    return 0;
}