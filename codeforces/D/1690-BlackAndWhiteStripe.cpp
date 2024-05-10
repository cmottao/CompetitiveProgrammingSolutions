// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k; cin >> n >> k;
    string s; cin >> s;
    int b = 0, w = 0, mxb = 0;

    for(int i = 0; i < n; i++) {
        (s[i] == 'B') ? b++ : w++;

        if(i >= k - 1) {
            mxb = max(mxb, b);
            (s[i - k + 1] == 'B') ? b-- : w--;
        }
    }
    cout << k - mxb << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}