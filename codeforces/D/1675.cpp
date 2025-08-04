// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

const int N = 2 * 1e5 + 10;

vector<int> g(N), p;

void f(int i) {
    p.push_back(i);

    if((g[i] != i) && (g[g[i]] != 0)) {
        f(g[i]);
    }
    g[i] = 0;
}
    
void solve() {
    int n; cin >> n;
    vector<bool> l(n + 1, 1);
    int s = n;

    for(int i = 1; i <= n; i++) {
        cin >> g[i];

        if(l[g[i]]) {
            l[g[i]] = 0;
            s--;
        }
    }
    cout << s + (n == 1) << '\n';

    for(int i = 1; i <= n; i++) {
        if(l[i] || n == 1) {
            f(i);

            cout << p.size() << '\n';
            for(int j = p.size()-1; j >= 0; j--) {
                cout << p[j] << ' ';
            }
            cout << '\n';
            p.clear();
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