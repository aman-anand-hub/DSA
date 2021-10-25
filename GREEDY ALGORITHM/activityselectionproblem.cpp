#include<bits/stdc++.h>
using namespace std;

struct activity
{
    int start;
    int finish;
};

bool activityselector(activity s1, activity s2)
{
    return (s1.finish < s2.finish);
}

void printmaxactivities(activity arr[], int n)
{
    sort(arr, arr+n, activityselector);

    cout<<"Following activites are selected: "<<endl;

    int i=0;
    int count=1;

    cout<<"("<<arr[i].start<<", "<<arr[i].finish<<") ,";

    for(int j=1; j<n; j++)
    {
        if(arr[j].start > arr[i].finish)
        {
            cout<<"("<<arr[j].start<<", "<<arr[j].finish<<") ,";
            i=j;
            count++;
        }
    }
    cout<<endl;
    cout<<"total number of activies selected are: "<<count<<endl;

}

int main()
{
    activity arr[] = {{1, 2}, {3, 4}, {0, 6}, {5, 7},{8, 9}, {5, 9}};
    int n = sizeof(arr)/sizeof(arr[0]);
    printmaxactivities(arr, n);

    return 0;
}