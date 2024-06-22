#include <iostream>
using namespace std;

string concat(string s1, string s2)
{
    return s1 + " " + s2;
}

int main()
{
    string name = "Aniruddha";
    string surname = "Auchat";
    string Fullname = concat(name, surname);
    cout << Fullname;
    return 0;
}