#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve() {
    ll n,x; cin >> n>>x;
    ll pre[n+1]={};
    for (int i = 1; i <= n; i++) {
        cin >> pre[i];
        pre[i] += pre[i-1];
    }
    map<ll,ll> mp;
    ll cnt=0;
    for (int i = 0; i <= n; i++) {
        ll search=pre[i]-x;
        cnt+=mp[search];
        mp[pre[i]]++;
    }
    cout << cnt << endl;
}
int main() {
    fastIO();
    solve();
    return 0;
}

