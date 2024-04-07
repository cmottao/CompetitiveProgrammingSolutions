// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n), b, r;
    
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++) {
        char si; cin >> si;
        ((si == 'B') ? b : r).push_back(a[i]);
    }
    sort(b.begin(), b.end());
    sort(r.rbegin(), r.rend());

    for(int i = 0; i < b.size(); i++) {
        if(b[i] < i + 1) {
            cout << "NO" << '\n';
            return;
        }
    }
    for(int i = 0; i < r.size(); i++) {
        if(r[i] > n - i) {
            cout << "NO" << '\n';
            return;
        }
    }
    cout << "YES" << '\n';
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