#include <iostream>
using namespace std;
int main()
{
    int n1, n2, n3;
    cout << "Enter 3 number : ";
    cin >> n1 >> n2 >> n3;
    // if (n1 > n2 && n1 > n3)
    //     cout << n1;
    // else if (n2 > n1 && n2 > n3)
    //     cout << n2;
    // else
    //     cout << n3;

    int largest = (n1 > n2 && n1 > n3) ? n1 : (n2 > n1 && n2 > n3) ? n2 : n3;

    cout<< largest;
}