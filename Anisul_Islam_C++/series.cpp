#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int sum = 0, i, n;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        // sum += i;
        sum += pow(i, 5);
    }
    cout << sum;
}