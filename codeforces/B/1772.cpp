// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    vector<int> a(4);
    string x = "";
    
    for(int i = 0; i < 4; i++) {
        cin >> a[i];
    }
    swap(a[2], a[3]);
    
    for(int i = 0; i < 4; i++) {
        x.push_back((a[i] < a[(i + 1) % 4]) ? '<' : '>');
    }
    cout << ((x == "<<>>" || x == "><<>" || x == ">><<" || x == "<>><") ? "YES" : "NO") << '\n';
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