// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n; cin >> n;
    long long m = 1, x = n, z = n;

    for(long long i = 2; i * i <= n; i++) {
        int s = 0;

        while(n % i == 0) {
            n /= i;
            s++;
        }
        if(s > m) {
            x = i;
            m = s;
        }
    }
    cout << m << '\n';

    for(int i = 1; i < m; i++) {
        cout << x << ' ';
        z /= x;
    }
    cout << z << '\n';
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