// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x0, y0; cin >> n >> x0 >> y0;
    vector<int> x(n), y(n), dead(n, 0);
    int ans = 0;

    for(int i = 0; i < n; i++) { 
        cin >> x[i] >> y[i];
    }

    for(int i = 0; i < n; i++) {
        if(dead[i]) continue;
        ans++;
        
        for(int j = 0; j < n; j++) {
            if(x0 == x[i]) {
                if(x0 == x[j]) dead[j] = 1;
            }
            else {
                if((y[j] - y[i]) * (x[i] - x0) == ((y[i] - y0) * (x[j] - x[i]))) dead[j] = 1;
            }
        }
    }
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
}