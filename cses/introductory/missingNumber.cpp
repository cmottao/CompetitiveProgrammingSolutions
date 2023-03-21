// Made by Cristian Motta
#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define double long double

const int MAX = 2 * 1e5 + 10;
const int MIN = -MAX;

bool arr[MAX];
void solve() {
    int n;
    cin >> n;

    for(int i = 0; i < n-1; i++) {
        int x; 
        cin >> x;
        arr[x-1] = true;
    }
    
    for(int i = 0; i < n; i++) {
        if(!arr[i]) {
            cout << i + 1;
        }
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