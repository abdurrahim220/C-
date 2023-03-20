#include <iostream>
using namespace std;
int main()
{
    int marks[5];
    int marks2[5] = {10, 20, 30, 40, 50};
    int marks3[7] = {10, 20, 30, 40, 50, 60, 70};
    marks[0] = 55;
    marks[1] = 65;
    marks[2] = 75;
    marks[3] = 85;
    marks[4] = 95;

    cout << marks[0] << " ";
    cout << marks[1] << " ";
    cout << marks[2] << " ";
    cout << marks[3] << " ";
    cout << marks[4] << " " << endl;

    cout << "Marks2 output:" << endl;
    // dynamic way
    cout << marks2[0] << " ";
    cout << marks2[1] << " ";
    cout << marks2[2] << " ";
    cout << marks2[3] << " ";
    cout << marks2[4] << " ";

    cout << endl
         << "Array 3 output using loop:" << endl;
    // using loop through
    for (int i = 0; i <= 6; i++)
    {
        cout << marks3[i] << endl;
    }
}