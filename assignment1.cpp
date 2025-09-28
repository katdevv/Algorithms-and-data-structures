#include <bits/stdc++.h>
using namespace std;

long long n, m, i, j;
int sieve[1000001];
map<int, int> maxExp;

void modifSieve(){
	for(i = 2; i < 1000001; i++){
		if(sieve[i] > 0) continue;
		for(j = i*i; j < 1000001; j += i){
			if(sieve[j] == 0) sieve[j] = i;
		}
	}
}

int main(){
	cin>>n>>m;
	modifSieve();
	for(i=0;i<n;i++){
		int a;
		cin>>a;

		map<int, int> curExp;
		while(sieve[a] != 0){
			curExp[sieve[a]]++;
			a/=sieve[a];
		}
		if(a > 1) curExp[a]++;

		for(auto it = curExp.begin(); it != curExp.end(); it++){
			if(maxExp[it->first] < it->second){
				maxExp[it->first] = it->second;
			}
		}
	}

	long long total = 1;
    for(auto it = maxExp.begin(); it != maxExp.end(); it++){
		total = (total * (it->second + 1)) % m;
	}
	cout<<(total - n%m + m) % m<<endl;
	return 0;
}