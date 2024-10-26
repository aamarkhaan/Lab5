#include <iostream>
using namespace std;

int main()
{
    float Total_Subjects = 0;
    float Tota_lMarks = 0;
    float Marks = 0;

    cout << "Enter the total number of subjects : ";
    cin >> Total_Subjects;

    for (int i = 1; i <= Total_Subjects; i++)
    {
        cout << "Enter the marks of subject " << i << " : ";
        cin >> Marks;
        Tota_lMarks += Marks;
    }
    
    float Avg = 0;
    Avg = Tota_lMarks / Total_Subjects;
     cout << "Your Average marks are : "<< Avg << endl;

    if (Avg >= 90)
    {
        cout << "Grade A" << endl ;
    }
    else if (Avg >= 75 && Avg <= 89)
    {
        cout << "Grade B" << endl;
    }
    else if (Avg >= 50 && Avg <= 74)
    {
        cout << "Grade C" << endl;
    }
    else
    {
        cout << "Grade F" << endl;
    }
    return 0;
}