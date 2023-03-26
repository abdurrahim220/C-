#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> myStack1;
    stack<int> myStack2;

    myStack1.push(1);
    myStack1.push(2);
    myStack1.push(3);

    myStack2.push(4);
    myStack2.push(5);
    myStack2.push(6);

    myStack1.swap(myStack2);

    cout << "My stack1 OutPut : ";
    while (!myStack1.empty())
    {
        cout << myStack1.top() << " ";
        myStack1.pop();
    }

    cout << endl
         << "My stack2 OutPut : ";
    while (!myStack2.empty())
    {
        cout << myStack2.top() << " ";
        myStack2.pop();
    }
}