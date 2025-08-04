// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define double long double

const int MAX = 1e6 + 10;
const int MIN = -MAX;
const int INF = 1e9;
const int MOD = 1e9 + 7;

string arr[MAX];
void solve() {
    int n; cin >> n;
    
    for(int i = 0; i < n; i++) {
        string word; cin >> word;
        arr[i] = word;
    }

    for(int i = 0; i < n; i++) {
        if(arr[i].length() > 10) {
            cout << arr[i][0] << arr[i].length() - 2 << arr[i][arr[i].length() - 1] << endl;
        }
        else {
            cout << arr[i] << endl;
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