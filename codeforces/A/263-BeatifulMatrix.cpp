// Made by Cristian Motta
#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define double long double

const int MAX = 1e6 + 10;
const int MIN = -MAX;

void solve() {
    int center = 2, row, column;

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            int n; cin >> n;
            
            if(n == 1) {
                row = i;
                column = j;
            }
        }
    }
    cout << abs(row - center) + abs(column - center);
}

int32_t main() {
    int tc = 1;
    // cin >> tc;

    for(int t = 1; t <= tc; t++) {
        solve();
    }
    return 0;
}