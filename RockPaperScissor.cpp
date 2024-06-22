#include <iostream>
#include <ctime>
using namespace std;

char getuserchoice()
{
    char player;
    cout << "\n";
    cout << "******************************\n";
    cout << "***Rock-Paper-Scissors Game***\n";
    cout << "******************************\n";
    cout << "\n";

    do
    {
        cout << "Choose one of the following\n";
        cout << "'r' for Rock\n";
        cout << "'p' for Paper\n";
        cout << "'s' for Scissors\n";
        cin >> player;

    } while (player != 'r' && player != 'p' && player != 's');

    return player;
}
char getcomputerchoice()
{
    srand(time(0));
    int num = rand() % 3 + 1;

    switch (num)
    {
    case 1:return 'r';
    case 2:return 'p';
    case 3:return 's';
    }
    return 0;
}
void showchoice(char choice)
{
    switch (choice)
    {
    case 'r':
        cout << "Rock\n";
        break;
    case 'p':
        cout << "Paper\n";
        break;
    case 's':
        cout << "Scissors\n";
        break;    

    }
}
void choosewinner(char player, char computer)
{
    switch (player)
    {
    case 'r':
        if (computer == 'r')
        {
            cout << "Its a Tie!\n";
        }
        else if (computer == 'p')
        {
            cout << "You lose!\n";
        }
        else
        {
            cout << "You win!\n";
        }
        break;

        case 'p':
        if (computer == 'p')
        {
            cout << "Its a Tie!\n";
        }
        else if (computer == 's')
        {
            cout << "You lose!\n";
        }
        else
        {
            cout << "You win!";
        }
        break;


        case 's':
        if (computer == 's')
        {
            cout << "Its a Tie!\n";
        }
        else if (computer == 'r')
        {
            cout << "You lose!\n";
        }
        else
        {
            cout << "You win!";
        }        
        break;

    }
}
int main()
{
    char player;
    char computer;

    player = getuserchoice();
    cout << "Your choice: ";
    showchoice(player);

    computer = getcomputerchoice();
    cout << "Computer choice: ";
    showchoice(computer);

    choosewinner(player, computer);
    return 0;
}