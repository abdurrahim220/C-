#include <iostream>
using namespace std;
int main()
{
    // int n;
    int n1, n2, mark;
    cout << "Enter a Number : ";

    cin >> mark;
    /* // cin >> n;
     cin >> n1 >> n2;
     // first problem to find positive or negarive:

     if (n > 0 && n % 2 == 0)
     {
         cout << "Number is positive and even";
     }
     else
     {
         cout << "It's either negative,zero or odd";
     }

     //    large number
     if (n1 > n2)
         cout << n1;
     else
         cout << n2;*/

    if (mark > 33)
        cout << "Pass";
    else
        cout << "Fail";
}