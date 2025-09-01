// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, x; cin >> n >> x;
    
    if(x == n) cout << x << '\n';
    else {
        long long oo = -1, oz = -1;

        for(long long bit = 1; bit <= n; bit <<= 1) {
            if(!(bit & n) && bit & x) {
                cout << -1 << '\n';
                return;
            }

            if(bit & n && !(bit & x)) oz = bit;
            else if(bit & n && bit & x && oo == -1) oo = bit;
        }

        if(oo > -1 && oo < oz) cout << -1 << '\n';
        else {
            long long s = 0;

            for(long long bit = oz; bit > 0; bit >>= 1) {
                if(!(bit & n)) s += bit;
            }

            if((n & (n + s + 1)) == x) cout << n + s + 1 << '\n';
            else cout << -1 << '\n';
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}