// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> s(n);
    int mx1 = 0, mx2 = 0;

    for(int i = 0; i < n; i++) {
        cin >> s[i];

        if(s[i] > mx2) {
            if(s[i] > mx1) {
                mx2 = mx1;
                mx1 = s[i];
            }
            else {
                mx2 = s[i];
            }
        }
    }

    for(int i = 0; i < n; i++) {
        if(s[i] != mx1) {
            cout << s[i] - mx1 << ' ';
        }
        else {
            cout << s[i] - mx2 << ' ';
        }
    }
    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}