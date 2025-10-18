// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    long long sp, sa, l = 1, r = n;

    cout << "1 1 " << n << endl;
    cin >> sp;

    cout << "2 1 " << n << endl;
    cin >> sa;

    while(l < r) {
        int m = (l + r) / 2;
        long long spc, sac;

        cout << "1 1 " << m << endl;
        cin >> spc;

        cout << "2 1 " << m << endl;
        cin >> sac;
        
        if(sac - spc == 0) l = m + 1;
        else r = m;
    }
    cout << "! " << l << " " << l + (sa - sp) - 1 << endl;
}

int main() {
    int t; cin >> t;
    while(t--) solve();
}