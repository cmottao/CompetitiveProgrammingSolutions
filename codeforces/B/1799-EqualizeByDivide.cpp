// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    multiset<pair<int, int>> a;
    vector<pair<int, int>> ans;
    
    for(int i = 1; i <= n; i++) {
        int ai; cin >> ai;
        a.insert({ai, i});
    }

    if((*a.begin()).first != 1 || (*a.begin()).first == (*a.rbegin()).first) {
        while((*a.begin()).first != (*a.rbegin()).first) {
            ans.push_back({(*a.rbegin()).second, (*a.begin()).second});
            a.insert({((*a.rbegin()).first + (*a.begin()).first - 1) / (*a.begin()).first, (*a.rbegin()).second});
            a.erase(*a.rbegin());
        }

        cout << ans.size() << '\n';
        for(auto p : ans) {
            cout << p.first << ' ' << p.second << '\n';   
        }
    }
    else {
        cout << -1 << '\n';
    }
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