#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int f[26];
void solve() {
    int n,k;  cin>>n>>k;
    string s; cin>>s;
    for(int i=0;i<s.length();i++) {
        f[s[i]-'a']++;
    }
    for(int i=0;i<26;i++) {
        if(f[i] > k) {
            f[i]-=k;
            k=0;
        }
        else {
            k-=f[i];
            f[i]=0;
        }
    }

    bool del[n]={};
    for(int i=n-1; i>=0; i--) {
        if(f[s[i]-'a']>0) {
            f[s[i]-'a']--;
        }
        else {
            del[i]=1; //Mark deleted
        }
    }
    for(int i=0;i<n;i++) {
        if(!del[i]) {
            cout<<s[i];
        }
    }

}

int main() {
    fastIO();
    solve();
    return 0;
}

