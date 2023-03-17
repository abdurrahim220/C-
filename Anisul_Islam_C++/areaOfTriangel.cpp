#include <iostream>
using namespace std;

int main()
{
    double h, b, area;
    cout << "Enter base : ";
    cin >> b;
    cout << "Enter height: ";
    cin >> h;

    area = 0.5 * b * h;
    cout << "Area of Triange : " << area << endl;
    return 0;
}