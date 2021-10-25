#include<bits/stdc++.h>
using namespace std;

void minPermutation(int arr[], int n)
{
    deque<int> result;
    result.push_front(arr[0]);

    for (int i = 1; i < n; i++)
    {
        if(arr[i]>result.front())
        {
            result.push_back(arr[i]);
        }
        if(arr[i]<result.front())
        {
            result.push_front(arr[i]);
        }
    }
    for (auto it = result.begin(); it!= result.end(); ++it)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}

int main()
{
    int n;
    cout<<"enter array size: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the array: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    minPermutation(arr, n);

/*
   deque<int> d;
   d.push_front(1);
   d.push_front(2);
   d.push_front(3);
   d.push_back(4);
   d.push_back(5);

   for(auto it= d.begin(); it!=d.end(); ++it)
   {
       cout<<*it<<' ';
   }
   cout<<endl;
   cout<<d.front()<<endl;
*/
    return 0;
}