// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;

    for(int i = 1; i <= 20; i++) {
        if(n % i) {
            for(int j = 0; j < n; j++) {
                cout << char ('a' + (j % i));
            }
            break;
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