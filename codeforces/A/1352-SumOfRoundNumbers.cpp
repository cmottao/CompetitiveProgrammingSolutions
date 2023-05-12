// Made by Cristian Motta
#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define double long double

const int MAX = 1e6 + 10;
const int MIN = -MAX;

void solve() {
    int n; cin >> n;
    vector <int> numbers; 
    int x = 1;

    for(int i = 1; i <= n; i*=10) {
        x = i;
    }

    while(x >= 1) {
        if(n >= x) {
            numbers.push_back((n / x) * x);
        }
        n %= x;
        x /= 10;
    }
    cout << numbers.size() << endl;

    for(auto x : numbers) {
        cout << x << " ";
    }
    cout << endl;
}

int32_t main() {
    int tc = 1;
    cin >> tc;

    for(int t = 1; t <= tc; t++) {
        solve();
    }
    return 0;
}