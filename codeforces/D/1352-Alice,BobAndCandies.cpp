// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> d(n);
    int a = 0, b = 0, x = 0, y = 0, m = 1, s = 0, l = 0, r = n - 1;
    
    for(int i = 0; i < n; i++) {
        cin >> d[i];
    }
    
    while(r >= l) {
        if(m) {
            while(x <= y && r >= l) {
                x += d[l++];
            }
            a += x;
            y = 0;
        }
        else {
            while(y <= x && r >= l) {
                y += d[r--];
            }
            b += y;
            x = 0;
        }
        m ^= 1;
        s++;
    }
    cout << s << ' ' << a << ' ' << b << '\n';
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