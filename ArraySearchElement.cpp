#include<iostream>
using namespace std;

int searchArray(int array[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == element)
        {
            return i;
        }   
    }
    return -1;
}

int main()
{
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(numbers)/sizeof(int);
    int index;
    int mynum;
    cout << "Enter number you want to search: " << '\n';
    cin >> mynum; 

    index = searchArray(numbers,size,mynum);

    if (index != -1)
    {
        cout << mynum << " is at index" << index;
    }
    else
    {
        cout << mynum << " is not in the array";
    }
    
    return 0;
}