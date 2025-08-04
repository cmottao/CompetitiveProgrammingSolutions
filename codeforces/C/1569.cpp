// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

const int mod = 998244353;
const int N = 2e5 + 10;

long long factorial[N];

long long inverse(int b, int e = mod - 2) {
    if(e == 0) return 1;
    long long res = inverse(b, e / 2);
    
    if(e & 1) return (((res * res) % mod) * b) % mod;
    return (res * res) % mod;
}

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    int mx = 0, m = 0, l = 0, mxC = 0;
    long long ans = factorial[n];
    
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        mx = max(mx, a[i]);
    }
    
    for(int i = 0; i < n; i++) {
        if(a[i] == mx - 1) l++;
        else if(a[i] < mx - 1) m++;
        else mxC++;
    }

    for(int i = 0; i <= m && mxC == 1; i++) {
        ans -= (((factorial[m] * inverse(factorial[m - i])) % mod) * factorial[m + l - i]) % mod;
        ans = (ans + mod) % mod;
    }
    cout << ans << '\n';
}    
    
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    factorial[0] = 1;
    
    for(int i = 1; i < N; i++) {
        factorial[i] = (factorial[i - 1] * i) % mod;
    }

    int t; cin >> t;
    while(t--) solve();
}