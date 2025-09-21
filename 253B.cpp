 #include <bits/stdc++.h>
using namespace std;

int n, i;

int main(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	cin>>n;
	vector<int> v(n);
	for(i=0; i<n; i++){
		cin>>v[i];
	}

	sort(v.begin(), v.end());
	int maxKeep = 0;
	for(i=0; i<n; i++){
		int curr = v[i];
		auto it = upper_bound(v.begin() + i, v.end(), curr*2);
		int m = distance(v.begin() + i, it);
		maxKeep = max(maxKeep, m);
	}

	cout << n - maxKeep << endl;
}