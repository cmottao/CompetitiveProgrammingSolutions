// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x; cin >> n >> x;
    
    for(int i = 0; i < x; i++) {
        cout << i << ' ';
    }
    for(int i = n - 1; i >= x; i--) {
        cout << i << ' ';
    }
    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}