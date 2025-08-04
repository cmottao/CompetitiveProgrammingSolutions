// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> e;
    long long mx = 0, flg = 0;

    for(int i = 0; i < n; i++) {
        int ai; cin >> ai;

        if(ai % 2) mx = max(mx, (long long) ai);
        else e.push_back(ai);
    }
    sort(e.begin(), e.end());

    for(int x : e) {
        flg |= (x > mx);
        mx += x;
    }
    cout << ((e.size() == n) ? 0 : e.size() + flg) << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}