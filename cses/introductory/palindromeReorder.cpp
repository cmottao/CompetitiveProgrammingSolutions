// Made by Cristian Motta
#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define double long double

const int MAX = 1e6 + 10;
const int MIN = -MAX;

void solve() {
    string abc;
    cin >> abc;
    unordered_map<char, int> count;
    for(char i: abc) {
        count[i]++;
    }
    int odds = 0;
    for(auto const& pair : count) {
        if(pair.second % 2 == 1) {
            odds++;
        }
    }
    if(odds > 1) {
        cout << "NO" << "\n";
    }
    else {

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