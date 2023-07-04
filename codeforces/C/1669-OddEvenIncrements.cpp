// Made by Cristian Motta
#include <iostream>
using namespace std;

#define int long long int
#define double long double

const int MAX = 1e6 + 10;
const int MIN = -MAX;

void solve() {
    int n, odd1, even1; cin >> n >> odd1 >> even1;
    bool odd = true, even = true;
    int odds = odd1 % 2;
    int evens = even1 % 2;

    for(int i = 3; i <= n; i++) {
        int a; cin >> a;

        if(i % 2 == 1) {
            odd = odd && (a % 2 == odds);
        }
        else {
            even = even && (a % 2 == evens);
        }
    }
    if(odd && even) {
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