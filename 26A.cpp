 #include <bits/stdc++.h>
using namespace std;

int n, s[3005], ans, i, j;

int main() {
	cin >>n;
	ans = 0;
	for(i = 2; i <= n; i++) {
		if(s[i]!=0) continue;

		s[i]++;
		for(j=2*i; j<=n; j+=i) s[j]++;

	}

	for(i = 2; i <= n; i++) {
		if(s[i] == 2) ans++;
	}

	cout << ans << endl;

	return 0;
}