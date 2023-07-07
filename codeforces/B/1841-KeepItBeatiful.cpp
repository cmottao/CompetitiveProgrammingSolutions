// Made by Cristian Motta
#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define double long double

const int MAX = 1e6 + 10;
const int MIN = -MAX;

void solve() {
    int q; cin >> q;
    int last, first;
    bool s = true;

    for(int i = 0; i < q; i++) {
        int xi; cin >> xi;

        if(i == 0) {
            first = xi, last = xi;
        }

        if(s) {
            if(xi >= last || xi <= first) {
                if(xi < last) {
                    s = false;
                }
                cout << 1;
                last = xi;
            }
            else {
                cout << 0;
            }
        }
        else {
            if(xi >= last && xi <= first) {
                cout << 1;
                last = xi;
            }
            else {
                cout << 0;
            }
        }
    }
    cout << endl;
}

int32_t main() {
    int tc = 1;
    cin >> tc;

    for(int t = 1; t <= tc; t++) {
        solve();
    }
    return 0;
}