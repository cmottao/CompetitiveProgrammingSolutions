// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> p(n), cur;
    vector<vector<int>> ans;
    int r = -1;

    for(int i = 0; i < n; i++) {
        cin >> p[i];
    }
    
    if(p[0] == n && n > 1) r = find(p.begin(), p.end(), n - 1) - p.begin();
    else r = find(p.begin(), p.end(), n) - p.begin();

    for(int l = 0; l < r; l++) {
        for(int j = r; j < n; j++) {
            cur.push_back(p[j]);
        }
        for(int j = r - 1; j >= l; j--) {
            cur.push_back(p[j]);
        }
        for(int j = 0; j < l; j++) {
            cur.push_back(p[j]);
        }
        ans.push_back(cur);
        cur.clear();
    }

    for(int i = r + 1; i < n; i++) {
        cur.push_back(p[i]);
    }
    cur.push_back(p[r]);
    for(int i = 0; i < r; i++) {
        cur.push_back(p[i]);
    }

    ans.push_back(cur);
    sort(ans.rbegin(), ans.rend());

    for(int i = 0; i < n; i++) {
        cout << ans[0][i] << ' ';
    }
    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}