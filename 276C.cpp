#include <iostream>
#include <algorithm>
using namespace std;

int n, m, d[200005], q[200005], i;

int main(){
    cin>>n>>m;
    for(i=1; i<=n; i++){
        cin>>d[i];
    }

    for(i=1; i<=m; i++){
        int l, r;
        cin>>l>>r;

        q[l]++;
        q[r+1]--;
    }

    for(i=1; i<=n; i++){
        q[i]+=q[i-1];
    }

    sort(d, d+n);
    sort(q, q+n);

    int sum = 0;
    for(i = 1; i <= n; i++){
       sum += q[i] * d[i];
    }

    cout<<sum<<endl;

    return 0;

}