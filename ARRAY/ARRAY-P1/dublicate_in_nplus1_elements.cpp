#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int findDublicate(vector <int>& nums){
    
    if (nums.size()>1)
    {
        int slow = nums[0];
        int fast = nums[nums[0]];
        while (slow != fast)
        {
            slow = nums[slow];
            fast = nums[nums[fast]];
        }
        fast =0;
        while (fast != slow)
        {
            fast = nums[fast];
            slow = nums[slow];
        }
        return slow;
    }
    return -1;
}

int main(){
    cout<<"enter size: "<<endl;
    int size;
    cin>>size;
    vector <int> v;
    cout<<"enter "<<size<<" elements: "<<endl;
    int input =0;
    for (int i = 0; i < size; i++)
    {
        cin>>input;
        v.push_back(input);
    }
    cout<<"dublicate element is: "<<findDublicate(v)<<endl;
    return 0;
}