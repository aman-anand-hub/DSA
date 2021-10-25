#include<bits/stdc++.h>
using namespace std;

int main()
{
    queue <int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    queue <int> q2;
    q2.push(11);
    q2.push(12);
    q2.push(13);
    q2.push(14);

    for (int i = 0; !q.empty(); i++)
    {
        cout<<q.front()<<endl;
        q.pop();
    }
    cout<<endl;
    cout<<"current size of queue is: "<<q.size()<<endl;
    q.push(5);
    cout<<q.front()<<endl;
    cout<<"current size of queue is: "<<q.size()<<endl;
    q.pop();
    cout<<"current size of queue is: "<<q.size()<<endl;
    //q.emplace() is same as q.push(), insertion happens at the back
    
   for (int i = 0; !q2.empty(); i++)
    {
        cout<<q2.front()<<endl;
        q2.pop();
    }

    q.swap(q2);

    cout<<"content in queues after swapping."<<endl;

    while (!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }

    cout<<endl;

    while(!q2.empty())
    {
        cout<<q2.front()<<endl;
        q2.pop();
    }

    return 0;
}



