// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b, l; cin >> a >> b >> l;
    set<int> s;

    for(long long i = 1; i <= l; i *= a) {
        for(long long j = 1; j <= l; j *= b) {
            if(l % (i * j) == 0) {
                s.insert(l / (i * j));
            }
        }
    }
    cout << s.size() << '\n';
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