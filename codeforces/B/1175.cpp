// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int l; cin >> l;
    long long m = 1, x = 0, of = 0;
    stack<int> a;

    for(int i = 0; i < l; i++) {
        string c; cin >> c;

        if(c == "for") {
            int n; cin >> n;

            if(m > 1e10) a.push(1);
            else a.push(n);
            m *= a.top();
        }
        else if(c == "add") {
            x += m;
            if(x > (1ll << 32) - 1) of = 1;
        }
        else {
            m /= a.top();
            a.pop();
        }
    }
    
    if(of) cout << "OVERFLOW!!!";
    else cout << x;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
}