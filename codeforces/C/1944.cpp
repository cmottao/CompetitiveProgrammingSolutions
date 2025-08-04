// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    map<int, int> a;
    int f = 1;

    for(int i = 0; i < n; i++) {
        int ai; cin >> ai;
        a[ai]++;
    }

    for(int i = 0; i <= n; i++) {
        if(!a[i]) {
            cout << i << '\n';
            break;
        }
        if(a[i] == 1) {
            if(!f) {
                 cout << i << '\n';
                 break;
            }
            f = 0;
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