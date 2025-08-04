// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, le, ri; cin >> n >> le >> ri;
    multiset<int> l, r;
    int ans = 0, s = 0;
    
    for(int i = 0; i < n; i++) {
        int ci; cin >> ci;
        
        if(i < le) l.insert(ci);
        else {
            auto ptr = l.find(ci);
            
            if(ptr == l.end()) r.insert(ci);
            else l.erase(ptr);
        }
    }
    if(l.size() < r.size()) swap(l, r);
    
    for(int i = 1; i <= n; i++) {
        s += l.count(i) / 2;
    }
    cout << l.size() - min(s, ((int) (l.size() - r.size()) / 2)) << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}