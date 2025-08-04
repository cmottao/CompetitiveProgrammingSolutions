// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

int f(int n) {
    int s = 0;

    while(!(n % 2)) {
        n /= 2;
        s++;
    }
    return s;
}

void solve() {
    int n; cin >> n;
    vector<int> x(n);
    int s = 0, ans = 0;

    for(int i = 0; i < n; i++) {
        int ai; cin >> ai;
        x[i] = f(i + 1);
        s += f(ai);
    }
    sort(x.rbegin(), x.rend());

    for(int i = 0; i < n; i++) {
        if(s >= n) {
            cout << ans << '\n';
            return;
        }
        s += x[i];
        ans++;
    }
    cout << -1 << '\n';
}

int main() {
    #if LOCAL
        freopen("output.txt", "w", stdout);
        freopen("input.txt", "r", stdin);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}