#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n1, n2;
    cout << "Enter two number : ";
    cin >> n1 >> n2;
    cout << showpoint;
    cout<<fixed;
    cout << setprecision(2);
    
    float sum = n1 + n2;
    cout <<setw(20)<< "Sum is : " << sum << endl;

    float sub = n1 - n2;
    cout <<setw(20)<< "Sub is : " << sub << endl;

    float mul = n1 * n2;
    cout <<setw(20)<< "Mul is : " << mul << endl;

    double div = (float)n1 / n2;
    cout <<setw(20)<< "Div is : " << div << endl;
}