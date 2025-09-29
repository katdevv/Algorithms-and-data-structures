#include <bits/stdc++.h>

using namespace std;

int n, m;
int main(){
	cin>>n>>m;
	long long a[n + 1];

	long long sum = 0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		sum+=a[i];
	}

	vector<int> seen(n + 1, 0);
	long long all_val = 0;
	int ver = 0;

	for(int i=0;i<m;i++){
		int opp;
		cin>>opp;
		if(opp==1){
			int i; long long x; cin >> i >> x;
			long long cur = (seen[i] == ver ? a[i] : all_val);
			sum += (x - cur);
			a[i] = x;
			seen[i] = ver;
			cout << sum << '\n';
		} else {
			long long x; cin >> x;
			++ver;
			all_val = x;
			sum = x * 1LL * n;
			cout << sum << '\n';
		}
	}

	return 0;
}