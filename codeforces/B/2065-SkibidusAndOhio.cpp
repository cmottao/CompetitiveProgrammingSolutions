// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s; cin >> s;
    
    for(int i = 1; i < s.size(); i++) {
        if(s[i] == s[i - 1]) {
            cout << 1 << '\n';
            return;
        }
    }
    cout << s.size() << '\n';
}    
    
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int t; cin >> t;
    while(t--) solve();
}