// Made by Cristian Motta
#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define double long double

const int MAX = 100 + 10;
const int MIN = -MAX;

void solve() {
    int w; cin >> w;
    
    if(w % 2 == 0 && w > 2) {
        cout << "YES";
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