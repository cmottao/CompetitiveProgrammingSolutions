// Made by Cristian Motta
#include <iostream>
using namespace std;

#define int long long int
#define double long double

const int MAX = 150 + 10;
const int MIN = -MAX;

void solve() {
    int n;
    cin >> n;
    string inc1 = "X++";
    string inc2 = "++X";
    int ans = 0;

    for(int i = 0; i < n; i++) {
        string statement;
        cin >> statement;
        if(statement == inc1 || statement == inc2) {
            ans++;
        }
        else {
            ans--;
        }
    }
    cout << ans;
}

int32_t main() {
    int tc = 1;
    // cin >> tc;

    for(int t = 1; t <= tc; t++) {
        solve();
    }
    return 0;
}