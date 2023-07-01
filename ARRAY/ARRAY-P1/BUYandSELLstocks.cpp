#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int maxProfit(vector<int>& a){
    int min_till_now = a[0];
    int max_profit = 0;
    for (int i = 0; i < a.size(); i++)
    {
        min_till_now = min(a[i], min_till_now);
        max_profit = max(a[i]-min_till_now, max_profit);
    }
    return max_profit;
}

int main(){
    int count;
    cout<<"enter count of days: "<<endl;
    cin>>count;
    vector <int> v;
    int input;
    for (int i = 0; i < count; i++)
    {
        cin>>input;
        v.push_back(input);
    }
    cout<<"max profit: "<<maxProfit(v)<<endl;
    
    return 0;
}
