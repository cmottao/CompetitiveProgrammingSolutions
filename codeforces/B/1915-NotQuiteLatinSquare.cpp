// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    char g[3][3];

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> g[i][j];
        }
    }

    for(int i = 0; i < 3; i++) {    
        set<char> s;

        for(int j = 0; j < 3; j++) {
            s.insert(g[i][j]);
        }

        for(char i = 'A'; i <= 'C'; i++) {
            if(s.find(i) == s.end()) {
                cout << i << '\n';
                return;
            } 
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