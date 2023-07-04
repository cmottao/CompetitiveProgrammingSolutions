// Made by Cristian Motta
#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define double long double

const int MAX = 1e6 + 10;
const int MIN = -MAX;

void solve() {
    char grid[8][8];
    int s = 0;

    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 8; j++) {
            cin >> grid[i][j];
        }
    }

    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 8; j++) {
            if(grid[i][j] == 'R') {
                s++;
            }
        }
        if(s == 8) {
            cout << 'R' << endl;
            return;
        }
        else {
            s = 0;
        }
    }
    cout << 'B' << endl;
}

int32_t main() {
    int tc = 1;
    cin >> tc;

    for(int t = 1; t <= tc; t++) {
        solve();
    }
    return 0;
}