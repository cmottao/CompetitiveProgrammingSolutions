// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

vector<int> x;

int f(int n) {
    while(n) {
        if(n % 10 != 0 && n % 10 != 1) {
            return 0;
        }
        n /= 10;
    }
    return 1;
}

void solve() {
    int n; cin >> n;

    for(int i : x) {
        while(n % i == 0) {
            n /= i;
        }
    }
    cout << ((n == 1) ? "YES" : "NO") << '\n';
}

int main() {
    #if LOCAL
        freopen("output.txt", "w", stdout);
        freopen("input.txt", "r", stdin);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    for(int i = 1e6; i > 1; i--) {
        if(f(i)) {
            x.push_back(i);
        }
    }

    int t; cin >> t;
    while(t--) solve();
}