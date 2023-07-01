#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"Enter the number of test cases: "<<endl;
    int t;
    cin>>t;
    while (t--)
    {
        cout<<"Enter the number of elements in the array: "<<endl;
        int number_of_elements;
        cin>>number_of_elements;
        int a[number_of_elements], count =0;
        for (int j = 0; j < number_of_elements; j++)
        {
            cout<<"Enter element number "<<j+1<<":"<<endl;
            cin>>a[j];
        }
        unordered_set <int> uset;
        for (int  i = 0; i < number_of_elements; i++)
        {
            if (uset.find(a[i]) != uset.end())
            {
                count++;
            }
            else
            {
                uset.insert(a[i]);
            }
        }
        cout<<"Number of NON-REPETATIVE elements is "<<number_of_elements-count<<endl;
    }   
    return 0;
}