// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

const int oo = 1e9;

void solve() {
    int n; cin >> n;
    string a, b; cin >> a >> b;
    int difO = 0, difZ = 0, equO = 0, equZ = 0, ans = oo;
    
    for(int i = 0; i < n; i++) {
        if(a[i] == '0' && b[i] == '0') equZ++;
        else if(a[i] == '1' && b[i] == '1') equO++;
        else if(a[i] == '0' && b[i] == '1') difZ++;
        else difO++;
    }

    if(difZ == difO) ans = difZ * 2;
    if(equO - 1 == equZ) ans = min(ans, 1 + (equZ * 2));

    cout << ((ans == oo) ? -1 : ans) << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}