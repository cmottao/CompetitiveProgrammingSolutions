// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    string s; cin >> s;

    for(int i = 1; i <= n; i++) {
        if(!(n % i)) {
            int d = 0;

            for(int j = 0; j < i; j++) {
                vector<int> x(26, 0);
                int mx = 0;

                for(int k = j; k < n; k += i) {
                    x[s[k] - 'a']++;
                    mx = max(mx, x[s[k] - 'a']);
                }
                d += (n / i) - mx;

                if(d > 1) {
                    break;
                }
            }

            if(d < 2) {
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