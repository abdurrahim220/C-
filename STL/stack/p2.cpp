#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> stack;
    int sum=0;
    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);
    stack.push(5);
    stack.push(6);
    stack.push(7);
    stack.push(8);
    stack.push(9);
    stack.push(10);


   

    int num = 0;
    stack.push(num);


    stack.pop(); //10
    stack.pop(); //9
    stack.pop(); //8


     cout<<"Size of the Stack: "<<stack.size()<<endl;


    while (!stack.empty())
    {
        cout<<stack.top()<<endl;
       
        stack.pop();
    }
    


}