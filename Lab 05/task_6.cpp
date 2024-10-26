#include <iostream>
using namespace std;

int main() 
{
    int n;

    cout << "Enter a positive integer: ";
    cin >> n;

    for (int i = 1; i <= n; i++) 
    {
        cout << (i * i * i) << endl; 
    }

    return 0;
}