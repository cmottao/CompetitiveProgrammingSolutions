// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    vector<int> ans(n, -1), o, c;
    int flg = 0, flg1 = 0;

    for(int i = n - 1; i >= 0; i--) {
        if(s[i] == '(') o.push_back(i);
        else c.push_back(i);
    }

    for(int i = 0; i < n; i++) {
        if(ans[i] != -1) continue;

        if(s[i] == '(') {
            if(c.empty()) {
                cout << -1 << '\n';
                return;
            }
            ans[i] = ans[c.back()] = 1;
            flg = 1;
        }
        else {
            if(o.empty()) {
                cout << -1 << '\n';
                return;
            }
            ans[i] = ans[o.back()] = 2;
            flg1 = 1;
        }
        c.pop_back();
        o.pop_back();
    }

    cout << flg + flg1 << '\n';
    for(int i = 0; i < n; i++) {
        cout << ((flg && flg1) ? ans[i] : 1) << ' '; 
    }
    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}