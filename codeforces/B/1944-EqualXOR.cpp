// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k; cin >> n >> k;
    vector<int> l1, l2, r1, r2;
    map<int, int> a, b;

    for(int i = 0; i < n; i++) {
        int ai; cin >> ai;
        a[ai]++;
    }
    for(int i = 0; i < n; i++) {
        int bi; cin >> bi;
        b[bi]++;
    }

    for(auto p : a) {
        if(p.second == 1) {
            l1.push_back(p.first);
        }
        else {
            l2.push_back(p.first);
            l2.push_back(p.first);
        }
    }
    for(auto p : b) {
        if(p.second == 1) {
            r1.push_back(p.first);
        }
        else {
            r2.push_back(p.first);
            r2.push_back(p.first);
        }
    }

    for(auto x : l1) {
        l2.push_back(x);
    }
    for(auto x : r1) {
        r2.push_back(x);
    }

    for(int i = 0; i < k; i++) {
        cout << l2[i * 2] << ' ' << l2[i * 2 + 1] << ' ';
    }
    cout << '\n';

    for(int i = 0; i < k; i++) {
        cout << r2[i * 2] << ' ' << r2[i * 2 + 1] << ' ';
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