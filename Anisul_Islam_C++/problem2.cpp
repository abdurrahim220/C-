#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 15; i++)
    {
        if (i == 10)
        {
            //  break;
            continue;
        }
        if (i > 13)
            break;
        cout << i << endl;
    }
}