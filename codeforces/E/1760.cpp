// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

long long f(vector<int> &a, int n) {
    long long z = 0, s = 0;

    for(int i = n-1; i >= 0; i--) {
        a[i] ? s += z : z++;
    }
    return s;
}

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    int mx1 = 0, mn0 = n - 1;
    long long ans = 0;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
        a[i] ? mx1 = max(mx1, i) : mn0 = min(mn0, i);
    }
    ans = max(ans, f(a, n));

    a[mn0] = 1; 
    ans = max(ans, f(a, n));
    a[mn0] = 0;

    a[mx1] = 0;
    ans = max(ans, f(a, n));

    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}