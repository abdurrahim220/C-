#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> stack; // declare it is a stack structure
    int sum = 0;
    // adding value to the stack array or container
    stack.push(22);
    stack.push(23);
    stack.push(24);
    stack.push(25);
    stack.push(26);
    stack.push(27);

    while (!stack.empty())
    {
        sum += stack.top();
        stack.pop();
    }

    cout << "The Sum is : " << sum << endl;

    //
    // int num = 0;
    // stack.push(num);

    // removing items from the stack container
    // stack.pop();
    // stack.pop();
    // stack.pop();

    //
    // while (!stack.empty())
    // {
    //     cout << stack.top() << " ";
    //     stack.pop();
    // }
}