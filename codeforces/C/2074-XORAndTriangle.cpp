// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x; cin >> x;
    
    for(int y = 1; y < x; y *= 2) {
        if(x + (y + 1) > (x ^ (y + 1)) && x + (x ^ (y + 1)) > (y + 1) && (y + 1) + (x ^ (y + 1)) > x) {
            cout << y + 1 << '\n';
            return;
        }
    } 
    cout << -1 << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}