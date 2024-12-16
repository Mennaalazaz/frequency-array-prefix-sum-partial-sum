#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
ll fix(ll x, ll mod) {
    return ((x % mod)+ mod) % mod;
}

void solve() {
    int n; cin >> n;
    ll p[n+1]={};
    for (int i = 1; i <= n; i++) {
        cin >> p[i];
        p[i] += p[i-1];
         p[i]=fix(p[i], n);
    }
    map<ll, ll> mp;
    ll ans = 0;
    for (int i = 1; i <= n; i++) {
        ans += mp[p[i]];
        mp[p[i]]++;
    }
    cout << ans << '\n';

}

int main() {
    fastIO();
    solve();
    return 0;
}
