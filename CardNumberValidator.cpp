#include<iostream>
using namespace std;

int getdigit(const int number)
{
    return number % 10 + (number/10%10);
}

int sumodddigits(const string cardnumber)
{
    int sum =0;
    for (int i = cardnumber.size() - 1; i >= 0; i-=2)
    {
        sum += cardnumber[i] - '0';
    }
    return sum;
}

int sumevendigits(const string cardnumber)
{
    int sum =0;
    for (int i = cardnumber.size() - 2; i >= 0; i-=2)
    {
        sum += getdigit((cardnumber[i] - '0') * 2);
    }
    return sum;
}

int main()
{
    string cardnumber;
    int result = 0;
    cout << "Enter the card number: ";
    cin >> cardnumber;
    //American Express - 378282246310005
    result = sumevendigits(cardnumber) + sumodddigits(cardnumber);

    if (result % 10 == 0)
    {
        cout << cardnumber << " is valid " << '\n';
    }
    else
    {
        cout << cardnumber <<"is invalid " << '\n';
    }
    
    return 0;
}