 #include <bits/stdc++.h>
using namespace std;

int w, h, n, i;

int main(){
	cin >> w >> h >> n;

	set<long long> Sx = {0, w};
	set<long long> Sy = {0, h};

	multiset<long long> Wx = {w}; // widths
	multiset<long long> Hy = {h}; // heights

	for(i = 0; i<n; i++){
		char c;
		int pos;
		cin >> c >> pos;

		if(c == 'V'){
			// Find range
			auto itR = Sx.lower_bound(pos);
			auto itL = prev(itR);
			int L = *itL, R = *itR;

			// remove old segment
			auto itOld = Wx.find(R-L);
			Wx.erase(itOld);

			// Insert new segments
			Wx.insert(pos - L);
			Wx.insert(R - pos);

			// Insert cut position
			Sx.insert(pos);

		}else if(c == 'H'){
			// Find range
			auto itR = Sy.lower_bound(pos);
			auto itL = prev(itR);
			int  L = *itL, R = *itR;

			// remove old segment
			auto itOld = Hy.find(R-L);
			Hy.erase(itOld);

			// Insert new segments
			Hy.insert(pos - L);
			Hy.insert(R - pos);

			// Insert cut position
			Sy.insert(pos);
		}

		long long maxW = *Wx.rbegin();
		long long maxH = *Hy.rbegin();
		cout << maxW * maxH << endl;
	}
	return 0;
}