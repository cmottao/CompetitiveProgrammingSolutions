// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s; cin >> s;
    vector<int> a = {1};
    int ans = 4;

    for(int i = 0; i < 4; i++) {
        if(s[i] == '0') {
            a.push_back(10);
        }
        else {
            a.push_back(s[i] - '0');
        }
    }

    for(int i = 1; i < 5; i++) {
        ans += abs(a[i] - a[i - 1]);
    }
    cout << ans << '\n';
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