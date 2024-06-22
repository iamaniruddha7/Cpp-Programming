#include<iostream>
using namespace std;

int main()
{
    string food[5];
    int size = sizeof(food) / sizeof(food[0]);
    string temp;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the food item or 'q' to quit #" << i + 1 << ":";
        getline(cin, temp);
        if (temp == "q")
        {
            break;
        }
        else        
        {
            food[i] = temp;            
        } 
    }

    cout << "Your food items:\n"; 

    for(int i = 0; !food[i].empty();i++)
    {
        cout << food[i] << '\n';
    }
    

    return 0;
}