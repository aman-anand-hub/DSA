// C++ program to find longest
// contiguous subsequence
#include <bits/stdc++.h>
using namespace std;

// Returns length of the longest
// contiguous subsequence
int findLongestConseqSubseq(int arr[], int n){

    unordered_set<int> s;
    int ans=0;

    for (int i = 0; i < n; i++)
    {
        s.insert(arr[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        if (s.find(arr[i] - 1) == s.end())
        {
            int j = arr[i];

            while (s.find(j) != s.end())
            {
                j++;
            }
            ans = max(ans, j-arr[i]);
        }
    }
    return ans;
}

int main(){
    cout<<"enter size: "<<endl;
    int count; cin>>count;
    int arr[count]; cout<<"enter array: "<<endl;
    for(int i=0; i< count; i++)  cin>>arr[i];

    cout<<"largest continuoues sequence is: "<<findLongestConseqSubseq(arr, count)<<endl;


    return 0;
}