#include<bits/stdc++.h>
using namespace std;

void showQ(queue<int> qq)
{
    queue<int> q = qq;
    while (!q.empty())
    {
        cout<<'\t'<<q.front();
        q.pop();
    }
    cout<<'\n';
    
}

int main()
{
    queue<int>q1;

    q1.push(1);
    q1.push(2);
    q1.push(3);

    cout<<"First Queue: ";
    showQ(q1);

    queue<int>q2;

    q2.push(4);
    q2.push(5);
    q2.push(6);

    cout<<"Second Queue: ";
    showQ(q2);

    q1.swap(q2);

    cout<<"After Swap q1 output is:";
    showQ(q1);
    cout<<"After Swap q2 output is:";
    showQ(q2);


}