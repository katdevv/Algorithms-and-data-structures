#include <bits/stdc++.h>
using namespace std;

int n, i, k, a, b, m1[10000001], m[10000001];

void eratos() {
	for (i = 2; i <= 10000000; i++) {
		if (m[i] == 0) {
			for (int j = i; j <= 10000000; j += i) {
				m[i] += m1[j];
				if (i != j) m[j] = -1;
			}
		}
	}
}

int main() {
	cin >> n;
	for (i = 0; i < n; i++) {
		scanf("%d", &k);
		m1[k]++;
	}

	eratos();

	for (i = 1; i <= 10000000; i++) {
		if (m[i + 1] == -1) m[i + 1] = 0;
		m[i] += m[i - 1];
	}

	cin >> k;
	for (i = 0; i < k; i++) {
		cin >> a >> b;
		if (b > 10000000) b = 10000000;
		if (a > 10000000) a = 10000000;
		cout << m[b] - m[a - 1] << endl;
	}
}
