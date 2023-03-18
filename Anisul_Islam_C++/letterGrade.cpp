#include <iostream>
using namespace std;
int main()
{
    float mark;
    cout << "Enter your mark: ";
    cin >> mark;
    if (mark > 100)
        cout << "Invalid mark";
    else if (mark < 100 && mark >= 80)
        cout << "A+" << endl;
    else if (mark < 79 && mark >= 70)
        cout << "A" << endl;
    else if (mark < 69 && mark >= 60)
        cout << "A-" << endl;
    else if (mark < 59 && mark >= 50)
        cout << "B" << endl;
    else if (mark < 49 && mark >= 40)
        cout << "C" << endl;
    else if (mark < 39 && mark >= 33)
        cout << "D" << endl;
    else
        cout << "Fail!";
}
