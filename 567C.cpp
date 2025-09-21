#include <bits/stdc++.h>
using namespace std;

int n, k, i;
long long a[200005], ans=0;
map<long long, long long> leftmp, rightmp;

int main(){
	cin>>n>>k;

	for(i=0;i<n;i++){
		cin>>a[i];
		rightmp[a[i]]++;
	}

	for(i=0;i<n;i++){
		rightmp[a[i]]--;
		if(a[i]%k==0) ans+=rightmp[a[i]*k]*leftmp[a[i]/k];
		leftmp[a[i]]++;
	}
	cout<<ans<<endl;
	return 0;
}