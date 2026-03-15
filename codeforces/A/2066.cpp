// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> mp(n + 1, -1);

    for(int i = 0; i < n; i++) {
        int xi; cin >> xi;
        mp[xi] = i + 1;
    }

    for(int i = 1; i <= n; i++) {
        if(mp[i] == -1) {
            cout << "? " << i << ' ' << (i % n) + 1 << endl;
            int d; cin >> d;

            if(d) cout << "! B" << endl;
            else cout << "! A" << endl;
            return;
        }
    }

    cout << "? " << mp[1] << ' ' << mp[n] << endl;
    int d0; cin >> d0;

    cout << "? " << mp[n] << ' ' << mp[1] << endl;
    int d1; cin >> d1;

    if(d0 == d1 && d0 >= n - 1) cout << "! B" << endl;
    else cout << "! A" << endl;
}

int main() {
    int t; cin >> t;
    while(t--) solve();
}