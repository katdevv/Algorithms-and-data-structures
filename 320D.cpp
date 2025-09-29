#include <bits/stdc++.h>
#include <stack>

using namespace std;

int main() {
	int n;
	cin>>n;
	vector<long long> v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}

	vector<pair<long long, int>> st; // value and days to die

	int ans = 0;

	for(int i=0;i<n;i++){
		long long cur = v[i];
		int d = 0;
		while(!st.empty() && st.back().first <= cur){
			d = max(d, st.back().second);
			st.pop_back();
		}

		if(st.empty()) d = 0; // never dies
		else d++;

		ans = max(ans, d);
		st.emplace_back(cur, d);
	}

	cout<<ans<<endl;
	return 0;
}