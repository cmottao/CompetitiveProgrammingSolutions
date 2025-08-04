// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

long long gauss(long long n) {
    return (n * (n + 1)) / 2;
}

void solve() {
    long long n; cin >> n;
    long long l = 0, r = 1e10;

    while(r - l > 1) {
        long long m = (l + r) / 2;

        if(gauss(m) >= n) {
            r = m;
        }
        else {
            l = m;
        }
    }
    cout << ((gauss(r) == n) ? r + 1 : r + n - gauss(r - 1)) << '\n'; 
}

int main() {
    #if LOCAL
        freopen("output.txt", "w", stdout);
        freopen("input.txt", "r", stdin);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}