#include <iostream>
#include <algorithm>
using namespace std;

long long n, i, x, y, m, k, l[100005], r[100005], d[100005];
long long a[100005], f[100005], c[100005];

int main(){
	cin>>n>>m>>k;
	for(i=1;i<=n;i++){
		cin>>a[i];
	}
	for(i=1;i<=m;i++){
		cin>>l[i]>>r[i]>>d[i];
	}
	for(i=1;i<=k;i++){
		cin>>x>>y;
		f[x]++;
		f[y+1]--;
	}
	for(i=1;i<=m;i++){
		f[i]+=f[i-1];
		c[l[i]] += f[i]*d[i];
		c[r[i]+1] -= f[i]*d[i];
	}
	for(i=1;i<=n;i++){
		c[i]+=c[i-1];
		cout<<c[i] + a[i]<<" ";
	}

	cout<<endl;
	return 0;
}