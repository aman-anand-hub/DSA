#include<bits/stdc++.h>
using namespace std;
int rec(int n, int &prev)
{
	if (n==0)
	return 0;
	prev=n;
	int digits[4];
	for (int i=0;i<4;i++)
	{
	    digits[i]=n%10;
	    n=n/10;
	}
	sort(digits,digits+4);
	int asc=0;
	for (int i=0; i<4; i++) asc = asc*10+digits[i];
	sort(digits, digits+4, std::greater<int> ());
	int desc = 0;
	for (int i=0; i<4; i++) desc = desc*10 + digits[i];
	int diff = abs(asc - desc);
    if (diff==prev)
		return 0;

	return 1+rec(diff, prev);
}
int func(int n)
{
	int prev = 0;
	return rec(n, prev);
}

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        bool isposs=false;
        string s= to_string(n);
        for(int i=0;i<s.length()-1;i++)
        {
            if(s[i]!=s[i+1])
            {
                isposs=true;
            }
        }
        if(isposs && s.length()==4) cout<<func(n)<<endl;
        else cout<<"INVALID INPUT"<<endl;
    }
	return 0;
}