#include <bits/stdc++.h>
using namespace std;

int n, v, w, t, i, m;
long long c[200005], a[200005];
set<long long> s;

int main(){
	cin>>n;
	for(i=1; i<=n; i++){
		cin>>c[i];
		s.insert(i);
	}
	cin>>m;
	for(i=1; i<=m; i++){
		cin>>t;
		if(t==1){
			cin>>v>>w;
			while(w > 0 && !s.empty()){
				auto it = s.lower_bound(v);
				if(it == s.end()) break;

				int vessel = *it;
				if(a[vessel] + w < c[vessel]){
					a[vessel] = a[vessel] + w; break;
				}

				w -= c[vessel] - a[vessel];
				a[vessel] = c[vessel];
				s.erase(it);
				v = vessel + 1;
			}
		}else{
			cin>>v;
			cout << a[v] << endl;
		}
	}
}