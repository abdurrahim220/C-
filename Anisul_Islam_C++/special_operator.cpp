#include <iostream>
using namespace std;
int main()
{
    /*

    int a;
    float f;
    double d;
    char ch;
    char name[20];

   int c =  sizeof(a);
   cout<<c<<endl;

   int ff =  sizeof(f);
   cout<<ff<<endl;
   int df =  sizeof(d);
   cout<<df<<endl;
   int chf =  sizeof(ch);
   cout<<chf<<endl;
   int namef =  sizeof(name);
   cout<<namef<<endl;

    */

    int x, y, sum;
    sum = (x = 20, y = 30, sum = x + y);
    cout << sum;
}