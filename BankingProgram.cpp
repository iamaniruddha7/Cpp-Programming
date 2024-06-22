#include <iostream>
#include <iomanip>
using namespace std;

void showbalance(double balance)
{
    cout << "Your balance is $ " << std::setprecision(2) << std::fixed << balance << '\n';
}

double deposit(double balance)
{
    double amount = 0;
    cout << "Enter amount to be deposited: ";
    cin >> amount;
    if (amount > 0)
    {
        return amount;
    }
    else
    {
        cout << "Invalid Amount\n";
        return 0;
    }  
}

double withdraw(double balance)
{
    double amount = 0;
    cout << "Enter amount to be withdrawn: ";
    cin >> amount;
    if (amount > balance)
    {
        cout << "Insufficient funds\n";
        return 0;
    }
    else if(amount < 0)
    {
        cout << "Invalid Amount\n";
        return 0;
    }
    else
    {
        return amount;
    }
}

int main()
{
    double balance = 0;
    int choice = 0;

    do
    {
        cout << "********************************\n";
        cout << "*********Banking Program********\n";
        cout << "********************************\n";
        cout << "1. Show Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";
        cin >> choice;
        cin.clear();
        fflush(stdin);

        switch (choice)
        {
        case 1:
            showbalance(balance);
            break;
        case 2:
            balance += deposit(balance);
            showbalance(balance);
            break;
        case 3:
            balance -= withdraw(balance);
            showbalance(balance);
            break;
        case 4:
            cout << "Thanks for visiting!\n";
            break;
        default:
            cout << "Invalid Choice\n";
            break;
        }
    } while (choice != 4);
    return 0;
}