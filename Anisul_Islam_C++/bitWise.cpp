#include <iostream>
using namespace std;
int main()
{
    int a = 32, b = 12, c;
    c = a & b;
    cout << c << endl; // and
    c = a | b;         // or
    cout << c << endl;
    c = a ^ b; // x-or
    cout << c << endl;

    c = a << 3; // left shift
    cout << c << endl;
    c = a >> 3; // right shift
    cout << c << endl;
}