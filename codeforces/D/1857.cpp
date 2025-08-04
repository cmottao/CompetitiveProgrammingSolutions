// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

const int oo = 2 * 1e9;

void solve() {
    int n; cin >> n;
    vector<int> ab(n);
    int mx = -oo;

    for(int i = 0; i < n; i++) {
        cin >> ab[i];
    }
    for(int i = 0; i < n; i++) {
        int bi; cin >> bi;
        ab[i] -= bi;
        mx = max(mx, ab[i]);
    }

    cout << count(ab.begin(), ab.end(), mx) << '\n';
    for(int i = 0; i < n; i++) {
        if(ab[i] == mx) {
            cout << i + 1 << ' ';
        }
    }
    cout << '\n';
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