#include<iostream>
using namespace std;

namespace first{
    int x = 10;
}

namespace second{
    int x = 12;
}
int main()
{
    cout << first:: x << "\n";
    cout << second::x;
    return 0;
}