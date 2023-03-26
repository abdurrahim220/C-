#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> stack;

    stack.push(5);
    stack.push(4);
    stack.push(3);
    stack.push(2);

    cout<<"Top Of the Item : "<<stack.top()<<endl;
    cout<<"Size of the Stack : "<<stack.size()<<endl;
    return 0;
}