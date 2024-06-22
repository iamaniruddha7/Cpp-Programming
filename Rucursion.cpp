#include<iostream>
using namespace std;

void walk(int steps){

    //Recursive approach
    if (steps > 0)
    {
        cout << "You took a Step!\n";
        walk(steps - 1);
    }

    //Iterative approach
    // for (int i = 0; i < steps; i++)
    // {
    //     cout << "You took a Step!\n";
    // }
    
}

int main()
{
    walk(10);
    return 0;
}