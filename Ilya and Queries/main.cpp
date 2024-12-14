#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve() {
    string s; cin >> s;
    int n = s.length();
    s='@'+s ; // to make it 1-Based-Index

    int f[n+1]={};
    for(int i=1;i<=n;i++) {
        f[i]= (s[i]==s[i+1]) ;
    }

    // preform prefix sum on array f
    int pre[n+1]={};
    for(int i=1;i<=n;i++) {
        pre[i]=pre[i-1]+f[i];
    }

    int m; cin >> m;
    while(m--) {
        int l, r; cin >> l >> r;
        cout<<pre[r]-pre[l-1]-f[r]<<'\n';
    }


}

int main() {
    fastIO();
    solve();
    return 0;
}

