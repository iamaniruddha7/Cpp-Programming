#include<iostream>
using namespace std;

void bakepizza()
{
    cout << "Here is your Pizza!" << "\n" ;
}
void bakepizza(string s1)
{
    cout << "Here is your " << s1 << " Pizza!" << "\n" ;
}
void bakepizza(string s1, string s2)
{
    cout << "Here is your " << s1 << " & " << s2 << " Pizza!";
}

int main()
{
    bakepizza();
    bakepizza("Margherita");
    bakepizza("Pepproni", "Farmhouse");

    return 0;
}