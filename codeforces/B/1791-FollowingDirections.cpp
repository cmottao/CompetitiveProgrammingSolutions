// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define double long double

const int MAX = 1e6 + 10;
const int MIN = -MAX;
const int MOD = 1e9 + 7;
const int oo = 1e9;

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    pair<int, int> current = {0, 0};

    for(char ch : s) {
        if(ch == 'U') {
            current.second++;
        }
        else if(ch == 'D') {
            current.second--;
        }
        else if(ch == 'R') {
            current.first++;
        }
        else if(ch == 'L') {
            current.first--;
        }

        if(current.first == 1 && current.second == 1) {
            cout << "YES" << '\n';
            return;
        }
    }
    cout << "NO" << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tc = 1;
    cin >> tc;

    for(int t = 1; t <= tc; t++) {
        solve();
    }
    return 0;
}