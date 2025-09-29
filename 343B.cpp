#include <bits/stdc++.h>
#include <stack>

using namespace std;

string s;

int main(){
	cin>>s;
	stack<char> st;
	for(int i=0;i<s.length();i++){
		char curr=s[i];
		if(st.empty() || st.top()!=curr){
			st.push(curr);
		} else if (st.top()==curr){
			st.pop();
		}
	}
	if (st.empty()) cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
	return 0;
}