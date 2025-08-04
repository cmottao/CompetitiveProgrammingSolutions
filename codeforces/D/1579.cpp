// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    priority_queue<pair<int, int>> q;
    vector<pair<int, int>> ans;

    for(int i = 1; i <= n; i++) {
        int ai; cin >> ai;

        if(ai) {
            q.push({ai, i});
        }
    }

    while(q.size() > 1) {
        pair<int, int> a = q.top(); q.pop();
        pair<int, int> b = q.top(); q.pop();
        ans.push_back({a.second, b.second});

        if(--a.first) {
            q.push({a.first, a.second});
        }
        if(--b.first) {
            q.push({b.first, b.second});
        }
    }
    
    cout << ans.size() << '\n';
    for(auto p : ans) {
        cout << p.first << ' ' << p.second << '\n';
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