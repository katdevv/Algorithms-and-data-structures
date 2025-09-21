#include <iostream>
#include <algorithm>
using namespace std;

string s;
int m, k, q, i, d[100005];
int main(){
	cin >> s;
	int n = s.length();
	for(i = 2; i <= n; i++){
		if(s[i-1] == s[i-2]) d[i] = d[i-1]+1;
		else d[i] = d[i-1];
	}
	cin >> m;
	for(i = 1; i <= m; i++){
		cin>>k>>q;
		cout << d[q] - d[k] << endl;
	}
}