#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int a[105],b[105];
void solve(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int i=1;i<=n;i++)
		cin>>b[i];

	vector<pair<int,int>> ans;
	for(int i=1;i<=n;i++)
		for(int j=i+1;j<=n;j++)
			if(a[i]>=a[j]&&b[i]>=b[j]) swap(a[i],a[j]),swap(b[i],b[j]),ans.push_back({i,j});
			else if (a[i]<=a[j]&&b[i]<=b[j]) continue;
			else{
				cout<<"-1\n";
				return;
			}
	cout<<ans.size()<<"\n";
	for(auto& [x,y]:ans)
		cout<<x<<" "<<y<<"\n";
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}