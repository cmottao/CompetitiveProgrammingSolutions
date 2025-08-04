// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int m; cin >> m;
    vector<int> a(30, 0);

    for(int i = 0; i < m; i++) {
        int ti, vi; cin >> ti >> vi;

        if(ti == 1) {
            a[vi]++;
        }
        else {
            for(int i = 29; i >= 0; i--) {
                vi -= min(vi / (1 << i), a[i]) * (1 << i);      
            }
            cout << (vi ? "NO" : "YES") << '\n'; 
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

    solve();
}