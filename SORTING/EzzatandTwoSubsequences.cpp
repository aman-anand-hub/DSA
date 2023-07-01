#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int t, n, a[100010];
ll ss;
int main(){
	cin >> t;
	while(t--){
		cin >> n;
		for(int i = 1; i <= n; i++)
			cin >> a[i];
		sort(a + 1, a + n + 1), ss = 0;
		for(int i = 1; i < n; i++) ss += a[i];
		printf("%.9lf\n", 1.0 * ss / (double)(n - 1) + 1.0 * a[n]);
	}
	return 0;
}
