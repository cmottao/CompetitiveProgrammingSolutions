// Made by Cristian Motta
#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define double long double

const int MAX = 1e6 + 10;
const int MIN = -MAX;

void solve() {
    int n; cin >> n;
    
    cout << n << " "; 
    
    while(n > 1) {
        if(n % 2 == 0) {
            n /= 2;
        }
        else {
            n = n * 3 + 1;
        }
        cout << n << " ";
    }
}

int32_t main() {
    int tc = 1;
    // cin >> tc;

    for (int t = 1; t <= tc; t++) {
        solve();
    }
    return 0;
}