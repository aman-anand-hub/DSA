#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Partitions arr[0..n-1] around [lowVal..highVal]
void threeWayPartition(int arr[], int n,
				int lowVal, int highVal)
{
	// Initialize ext available positions for
	// smaller (than range) and greater lements
	int start = 0, end = n-1;

	// Traverse elements from left
	for (int i=0; i<=end;)
	{
		// If current element is smaller than
		// range, put it on next available smaller
		// position.
		if (arr[i] < lowVal)
			swap(arr[i++], arr[start++]);

		// If current element is greater than
		// range, put it on next available greater
		// position.
		else if (arr[i] > highVal)
			swap(arr[i], arr[end--]);

		else
			i++;
	}
}




int main()
{
    int count; cout<<"enter array size: "<<endl; cin>>count;
    int arr[count]; cout<<"enter array: "<<endl;
    for (int i = 0; i < count; i++)
    {
        cin>>arr[i];
    }
    cout<<"enter starting and ending range resp: "<<endl;
    int a,b; cin>>a>>b;

    cout<<"respective subarray is: "<<endl;
    threeWayPartition(arr, count, a, b);

    for (int i = 0; i < count; i++)
    {
        cout<<arr[i]<<endl;
    }
    

    return 0;
}