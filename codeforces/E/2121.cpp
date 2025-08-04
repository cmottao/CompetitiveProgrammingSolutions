// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    string l, r; cin >> l >> r;

    for(int i = 0; i < l.size(); i++) {
        if(r[i] == l[i]) continue;

        if(r[i] - l[i] > 1) cout << i * 2 << '\n';
        else if(r[i] - l[i] == 1) {
            int j = i + 1;
            while(j < l.size() && l[j] == '9' && r[j] == '0') j++; 

            cout << (i * 2) + (j - i) << '\n';
        }
        return;
    }
    cout << l.size() * 2 << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}