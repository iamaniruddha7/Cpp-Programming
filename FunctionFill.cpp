#include<iostream>
using namespace std;

int main()
{
    string food[10];
    const int SIZE = sizeof(food) / sizeof(food[0]);

    fill(food, food + (SIZE/2), "Chicken Popcorn");
    fill(food + (SIZE/2), food + SIZE, "Spicy Mayo");

    for(string chicken : food)
    {
        cout << chicken << '\n';
    }
    return 0;
}