// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    map<int, int> d;
    
    for(int i = 0; i < n; i++) {
        int ai; cin >> ai;

        for(int j = 2; j * j <= ai; j++) {
            while(ai % j == 0) {
                ai /= j;
                d[j]++;
            }
        }
        if(ai != 1) {
            d[ai]++;
        }
    }

    for(auto p : d) {
        if(p.second % n) {
            cout << "NO" << '\n';
            return;
        }
    }
    cout << "YES" << '\n';
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