// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

const int oo = 1e9;

void solve() {
    int n; cin >> n;
    vector<string> ins(n);
    vector<int> a(n), b(n);
    pair<int, int> ans = {0, oo};

    for(int i = 0; i < n; i++) {
        cin >> ins[i] >> a[i] >> b[i];
    }

    for(int i = n-1; i >= 0; i--) {
        if(ins[i] == "on") {
            ans.first = max(0, ans.first - b[i]);
            ans.second -= a[i];
        }
        else if(ins[i] == "off") {
            ans.first += a[i];
            ans.second += b[i];
        }
        else {
            ans.first = max(ans.first, a[i]);
            ans.second = min(ans.second, b[i]);
        }
    }
    cout << ans.first << ' ' << ans.second << '\n';
    ans = {0, oo};

    for(int i = 0; i < n; i++) {
        if(ins[i] == "on") {
            ans.first += a[i];
            ans.second += b[i];
        }
        else if(ins[i] == "off") {
            ans.first = max(0, ans.first - b[i]);
            ans.second -= a[i];
        }
        else {
            ans.first = max(ans.first, a[i]);
            ans.second = min(ans.second, b[i]);
        } 
    }   
    cout << ans.first << ' ' << ans.second << '\n'; 
}

int main() {
    freopen("traffic.out", "w", stdout);
    freopen("traffic.in", "r", stdin);

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
}
