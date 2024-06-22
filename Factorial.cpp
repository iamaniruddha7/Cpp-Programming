#include<iostream>
using namespace std;

int factorial(int num){

    //Recursive approach
    if (num > 1)
    {
        return num * factorial(num - 1);
    }
    else{
        return 1;
    }

    //Iterative approach
    // int result = 1;
    // for (int i = 1; i <= num; i++)
    // {
    //     result = result * i;
    // }
    // return result;
    
}

int main()
{
    cout << factorial(3);
    return 0;
}