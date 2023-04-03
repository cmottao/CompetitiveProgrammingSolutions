// Made by Cristian Motta
#include <iostream>
using namespace std;

#define int long long int
#define double long double

const int MAX = 1e6 + 10;
const int MIN = -MAX;

void solve() {
    int n;
    cin >> n;
    bool odd = true;
    bool even = true;
    int odd1;
    cin >> odd1;
    int odds = odd1 % 2;
    int even1;
    cin >> even1;
    int evens = even1 % 2;
    for(int i = 3; i <= n; i++) {
        int a;
        cin >> a;
        if(i % 2 == 1) {
            odd = odd && (a % 2 == odds);
        }
        else {
            even = even && (a % 2 == evens);
        }
    }
    if(odd && even) {
        cout << "YES" << "\n";
    }
    else {
        cout << "NO" << "\n";
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