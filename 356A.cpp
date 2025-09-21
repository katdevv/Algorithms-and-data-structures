 #include <bits/stdc++.h>
using namespace std;

int n, m, i, l, r, w, ans[300005];
set<int> s;

int main() {
	cin>>n>>m;
	for(i=1; i<=n; i++) {
		s.insert(i);
	}
	for(i=1; i<=m; i++) {
		cin>>l>>r>>w;
		auto it = s.lower_bound(l);
 		while(it!=s.end() && *it <= r) {
			int curr = *it;
			if(curr == w) {
				++it;
			} else {
				ans[curr] = w;
				it = s.erase(it);
			}
		}
	}
	for(i=1; i<=n; i++) {
		cout<<ans[i]<<" ";
	}

	return 0;
}