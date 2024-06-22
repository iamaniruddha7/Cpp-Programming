#include<iostream>
using namespace std;

int main()
{
    // string Name;
    // cin >> Name;
    // cout << Name << "Your name is : ";
    string FullName;
    getline(cin, FullName);
    cout  << "Your Fullname is : " << FullName << "\n";
   cout << FullName.length() << "\n";
   //FullName.clear();
   cout << FullName.append("@gmail.com");

    return 0;
}