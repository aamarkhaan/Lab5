#include <iostream>
using namespace std;

int main()
{
   
    int num;
    int sum = 0;
    cout << "Enter a positive integer: ";
    cin >>  num;

    for (int i = 1; i <= num; ++i)
    {
        sum += i;
    }

    cout << "The sum of the first " << num << " natural numbers is: " << sum << endl;


    return 0;
}