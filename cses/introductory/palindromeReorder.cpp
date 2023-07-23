// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define double long double

const int MAX = 1e6 + 10;
const int MIN = -MAX;
const int INF = 1e9;
const int MOD = 1e9 + 7;

void solve() {
    string st; cin >> st;
    map<char, int> counts;
    int odds = 0;

    for(char ch : st) {
        counts[ch]++;
    }

    string left = "", right, middle = "";
    bool s = true;

    for(auto pair : counts) {
        if(pair.second % 2 != 0) {
            if(odds == 0) {
                middle += string(pair.second, pair.first);
                odds++;
            }
            else {
                s = false;
            }
        }
        else {
            left += string(pair.second / 2, pair.first);
        }
    }
    right = left; reverse(right.begin(), right.end());
    string palindrome = left + middle + right;

    if(s) {
        cout << palindrome;
    }
    else {
        cout << "NO SOLUTION";
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