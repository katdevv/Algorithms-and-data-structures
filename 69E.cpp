#include <bits/stdc++.h>
using namespace std;

map<int, int> m;
set<int> s;

int n,k,t,i,a[100005];

int main(){
	cin>>n>>k;
	for(i=0; i<n; i++){
		cin>>t;
		a[i] = t;
		if(++m[t]==1) s.insert(t); else s.erase(t);
		if(i < k-1) continue;
		if(s.size()) cout<<(*(--s.end()))<<endl;
		else cout<<"Nothing"<<endl;

		t = a[i - k + 1];
		if(--m[t]==1) s.insert(t); else s.erase(t);
	}
}