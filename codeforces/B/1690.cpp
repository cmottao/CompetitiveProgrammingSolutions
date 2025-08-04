// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

const int oo = 1e9;

void solve() {
    int n; cin >> n;
    vector<int> a(n), b(n);
    int dif = oo;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++) {
        cin >> b[i];
        if(b[i] != 0) dif = min(dif, a[i] - b[i]);
    }

    if(dif < 0) {
        cout << "NO" << '\n';
    }
    else if(dif == oo) {
        cout << "YES" << '\n';
    }
    else {
        for(int i = 0; i < n; i++) {
            if((a[i] - b[i] > dif) || (a[i] - b[i] < dif && b[i] != 0)) {
                cout << "NO" << '\n';
                return;
            }
        }
        cout << "YES" << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}