#include <iostream>
using namespace std;

int main()
{
    int initial_Balance = 0;
    int deposit = 0;
    int withdraw = 0;

    cout << "Enter your Initial Balance : ";
    cin >> initial_Balance;

    cout << "Enter your Deposit Amount : ";
    cin >> deposit;
    
    initial_Balance += deposit;
    cout << "Your Balance after Deposit is : " << initial_Balance << endl;

    cout << "Enter the Withdrawal Amount : ";
    cin >> withdraw;

    initial_Balance -= withdraw;
    cout << "Your Balance after Withdrawal is : " << initial_Balance << endl;

    return 0;
}