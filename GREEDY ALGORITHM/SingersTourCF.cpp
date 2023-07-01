#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int M = 4e4+5;

ll a[M], ans[M];
int n; 
bool solve(){	
	ll sum = 0, tot = 0;
	for(int i=1; i<=n; i++){
		cin>>a[i];
		sum += a[i];
		tot += i;
	}
	if(sum % tot) return 0;
	sum /= tot;
	for(int i=1; i<=n; i++){
		ll t = a[i] + sum - a[i%n+1];
		if(t <= 0 || t % n) return 0;
		ans[i%n+1] = t/n;
	}
	return 1;
}

int main(){
	int T; cin>>T;
	while(T--){
		cin>>n;
		if(solve()){
			puts("YES");
			for(int i=1; i<=n; i++) cout<<ans[i]<<" ";
			puts("");
		}
		else puts("NO");
	}
}