// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

const int oo = 1e9;

void solve() {
    int n; cin >> n;
    int l = 0, r = oo, y = 0;
    vector<int> e;

    for(int i = 0; i < n; i++) {
        int ai, xi; cin >> ai >> xi;

        if(ai == 1) {
            l = max(l, xi);
        } 
        else if(ai == 2) {
            r = min(r, xi);
        }
        else {
            e.push_back(xi);
        }
    }

    for(auto x : e) {
        y += (x >= l && x <= r);
    }
    cout << max(0, r - l - y + 1) << '\n';
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