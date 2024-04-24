// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int k, n; cin >> k >> n;
    int s = 0, j = 1;
    
    for(int i = 1; i <= k; i++) {
        cout << j << ' ';
        
        if(s + i <= n - k) {
            s += i;
            j += i;
        }
        j++;
    }
    cout << '\n';
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