#include <iostream>
using namespace std;
int main()
{
    /*double farn,cels;
     cout<<"Enter celsious: ";
     cin>>cels;
     farn = 1.8 * cels + 32;
     cout<<"Fahrenheit= "<<farn;*/

    double farn, cels;
    cout << "Enter fahrenheit: ";
    cin >> farn;

    cels = (farn - 32) / 1.8;

    cout << "Celsius = " << cels << endl;
    return 0;
}