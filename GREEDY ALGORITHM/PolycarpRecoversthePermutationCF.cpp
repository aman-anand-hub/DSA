#include<iostream>
using namespace std;
int t,n,a[2000010];
int main(){
	cin>>n;
	while(n--){
		cin>>t;
		for(int i=1;i<=t;i++){
			cin>>a[i];
		}
		if(a[1]==t||a[t]==t){
			for(int i=t;i>=1;i--) cout<<a[i]<<" ";
		}
		else cout<<-1;
		cout<<"\n";
	}
	return 0;
}