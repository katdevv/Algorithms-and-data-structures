#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, m;
    cin>>n>>m;
	vector<int> cnt(n+1, 0);
	vector<int> bucket(m+2, 0);
	bucket[0] = n;

	int need = 1, met = 0;
	string ans;

	for(int i = 0; i < m; i++){
		int x; cin>>x;

		bucket[cnt[x]]--;
		cnt[x]++;
		bucket[cnt[x]]++;
		if (cnt[x] == need) met++;

		bool held = false;
		while (met == n) {
			held = true;
			met -= bucket[need];
			need++;
		}

		ans.push_back(held ? '1' : '0');
	}
	cout<<ans<<endl;
}