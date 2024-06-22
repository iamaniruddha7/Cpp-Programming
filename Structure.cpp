#include<iostream>
using namespace std;

struct student
{
    string name;
    int rollno;
    double gpa;
};

int main()
{
    student s1;
    s1.name = "Aniruddha";
    s1.rollno = 133;
    s1.gpa = 3.2;

    cout << s1.name << '\n';
    cout << s1.rollno << '\n';
    cout << s1.gpa << '\n';

    
    return 0;
}