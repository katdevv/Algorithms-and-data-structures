 #include <bits/stdc++.h>
using namespace std;

int n, i, f[1001];

int main() {
	cin >> n;
	int a[n];
	for (i = 0; i < n; i++){
		cin >> a[i];
		f[a[i]]++;
	}

	int m = 0;
	for (i = 1; i < 1001; i++){
		m = max(m, f[i]);
	}

	cout << n - m << endl;

}