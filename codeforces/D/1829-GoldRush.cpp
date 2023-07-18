// Made by Cristian Motta
#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define double long double

const int MAX = 1e6 + 10;
const int MIN = -MAX;

bool search(int n, int m) {
    if(n == m) {
        return true;
    }
    else if(n % 3 != 0) {
        return false;
    }
    else {
        return search(n / 3, m) || search((n / 3) * 2, m);
    }
}

void solve() {
    int n, m; cin >> n >> m;  
    bool ans = search(n, m);
    
    if(ans) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
}

int32_t main() {
    int tc = 1;
    cin >> tc;

    for(int t = 1; t <= tc; t++) {
        solve();
    }
    return 0;
}