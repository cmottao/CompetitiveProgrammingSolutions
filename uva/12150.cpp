// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve(int n) {
    vector<int> ans(n, -1); 
    int f = 1;

    for(int i = 0; i < n; i++) {
        int c, p; cin >> c >> p;

        if(ans[i + p] != -1 || i + p < 0 || i + p >= n) {
            f = 0;
        }
        else {
            ans[i + p] = c;
        }
    }

    if(!f) {
        cout << -1;
    }
    else {
        cout << ans[0];
        for(int i = 1; i < n; i++) {
            cout << ' ' << ans[i];
        }
    }
    cout << '\n';
}

int main() {
    #if LOCAL
        freopen("output.txt", "w", stdout);
        freopen("input.txt", "r", stdin);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    while(cin >> n && n) solve(n);
}