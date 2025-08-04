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
    int n; cin >> n;
    string meow; cin >> meow;
    bool s = true;
    int letters = 4;

    for(int i = 0; i < n - 1; i++) {
        if(meow[i] == 'm' || meow[i] == 'M') {
            s = s && (meow[i + 1] == 'm' || meow[i + 1] == 'M' || meow[i + 1] == 'e' || meow[i + 1] == 'E');
        }
        else if(meow[i] == 'e' || meow[i] == 'E') {
            s = s && (meow[i + 1] == 'e' || meow[i + 1] == 'E' || meow[i + 1] == 'o' || meow[i + 1] == 'O');
        }
        else if(meow[i] == 'o' || meow[i] == 'O') {
            s = s && (meow[i + 1] == 'o' || meow[i + 1] == 'O' || meow[i + 1] == 'w' || meow[i + 1] == 'W');
        }
        else if(meow[i] == 'w' || meow[i] == 'W') {
            s = s && (meow[i + 1] == 'w' || meow[i + 1] == 'W');
        }
    }
    
    if(s && (meow[0] == 'm' || meow[0] == 'M') && (meow[n - 1] == 'w' || meow[n - 1] == 'W')) {
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