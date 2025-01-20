// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    
    if(n & 1) { 
        for(int i = 1; i < n; i++) {
            for(int j = i + 1; j <= n; j++) {
                if(j - i <= n / 2) cout << 1 << ' ';
                else cout << -1 << ' ';
            }
        }
    }
    else {
        for(int i = 1; i < n; i++) {
            for(int j = i + 1; j <= n; j++) {
                if(j == i + (n / 2)) cout << 0 << ' ';
                else if(j - i <= n / 2) cout << 1 << ' ';
                else cout << -1 << ' ';
            }
        }
    }
    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}