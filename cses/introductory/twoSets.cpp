// Made by Cristian Motta
#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define double long double

const int MAX = 1e6 + 10;
const int MIN = -MAX;

void solve() {
    int n; cin >> n;

    if((n * (n + 1) / 2) % 2 == 0) {
        cout << "YES" << endl;

        int set1 = n / 2;
        cout << set1 << endl;

        for(int i = 1; i <= set1 / 2; i++) {
            cout << i << " ";
        }
        for(int i = n; i > n - ((set1 / 2) + (set1 % 2)); i--) {
            cout << i << " ";
        }
        cout << endl;

        int set2 = (n / 2) + (n % 2);
        cout << set2 << endl;

        for(int i = set1 / 2 + 1; i <= n - ((set1 / 2) + (set1 % 2)); i++) {
            cout << i << " ";
        }
    }
    else {
        cout << "NO";
    }
}

int32_t main() {
    int tc = 1;
    // cin >> tc;

    for(int t = 1; t <= tc; t++) {
        solve();
    }
    return 0;
}