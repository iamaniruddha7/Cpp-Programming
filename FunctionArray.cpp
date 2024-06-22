#include<iostream>
using namespace std;

double gettotal(double prices[], int size)
{
    double total = 0;
    for (int i = 0; i < size; i++)
    {
        total += prices[i];
    }
    return total;
}

int main()
{
    double prices[] = {84.41651, 92.161968, 97.6515};
    int size = sizeof(prices)/sizeof(double);
    double total = gettotal(prices, size);
    cout << total;
    return 0;
}