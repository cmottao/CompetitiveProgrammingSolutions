// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a[3]; 
    cin >> a[0] >> a[1] >> a[2];

    for(int i = 0; i < 3; i++) {
        if(a[(i) % 3] == a[(i + 1) % 3]) {
            cout << a[(i + 2) % 3] << '\n';
            return;
        }
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