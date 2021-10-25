#include <bits/stdc++.h>
using namespace std;
signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	string s;
	cin >> s;
	int n = s.length();
	if(n<26)
    {
		cout <<"-1";
		return 0;
	}
	int flag = 0;
	for(int i=0;i<n-25;i++)
    {
		set<char> st;
		int ct = 0;
		for(int j=i;j<i+26;j++)
        {
			if(s[j] != '?')
            {
				st.insert(s[j]);
			}
			else ct++;
		}
		if(st.size() + ct == 26)
        {
			flag = 1;
			int a[26];
			for(int j=0;j<26;j++) a[j] = 0;
			for(set<char> :: iterator it = st.begin();it!=st.end();it++)
            {
				a[(*it) - 'A'] = 1;
			}
			int cur = 0;
			for(int j=i;j<i+26;j++)
            {
				if(s[j] == '?')
                {
					while(cur<26 && a[cur]==1) cur++;
					s[j] = ('A' + cur);
					cur++;
				}
			}
			break;
		}
	}
	if(flag == 0)
    {
		cout << "-1";
	}
	else
    {
		for(int i=0;i<n;i++)
        {
			if(s[i] == '?') s[i] = 'A';
		}
		cout << s ;
	}
	return 0;
}