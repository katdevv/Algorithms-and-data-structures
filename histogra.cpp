#include <bits/stdc++.h>
#include <stack>

using namespace std;

int n;

int main() {
	cin >> n;
	int heights[n + 1];
	for (int i = 0; i < n; i++) {
		cin >> heights[i];
	}
	int left = 0, right = 0;
	stack<int> st;

	long long  ans = 0;

	for (int i = 0; i <= n; i++) {
		int curHeight = (i == n) ? 0 : heights[i];

		while(!st.empty() && heights[st.top()] > curHeight) {
			int height = heights[st.top()]; st.pop();

			int width;
			if(st.empty()) {
				width = i;
			} else {
				width = i - st.top() - 1;
			}
			ans = max(ans, width * height);

		}
		st.push(i);
	}
	cout << ans << endl;
}