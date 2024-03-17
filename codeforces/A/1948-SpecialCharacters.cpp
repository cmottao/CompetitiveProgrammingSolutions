// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;

    if(n % 2) {
        cout << "NO" << '\n';
    }
    else {
        cout << "YES" << '\n';
        for(int i = 0; i < n/2; i++) {
            cout << "AAB";
        }
        cout << '\n';
    }
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