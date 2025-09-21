 #include <bits/stdc++.h>
using namespace std;

int n;

int main(){
	cin>>n;
	vector<int> v(n);
	for(int i = 0; i < n; i++){
		cin >>v[i];
	}
	sort(v.begin(), v.end());

	int ans = n;

	int left = 0, right = n/2;
	while(left < n/2 && right < n){
		if(v[left]*2 <= v[right]){
			ans--; left++; right++;
		} else right++;
	}

	cout << ans << endl;
	return 0;
}