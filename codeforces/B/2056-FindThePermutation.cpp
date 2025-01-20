// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> ans(n, 0);

    for(int i = 0; i < n; i++) {
        int s = 1, k = -1;

        for(int j = 0; j < n; j++) {
            char gij; cin >> gij;
            if(j > i && gij == '0') s++; 
        }
        
        while(s) {
            if(!ans[k + 1]) s--; 
            k++;
        }
        ans[k] = i + 1;
    }

    for(int i = 0; i < n; i++) {
        cout << ans[i] << ' ';
    }
    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}