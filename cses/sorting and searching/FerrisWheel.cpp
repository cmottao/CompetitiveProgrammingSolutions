// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x; cin >> n >> x;
    int l = 0, r = n - 1, ans = 0;
    vector<int> p(n);

    for(int i = 0; i < n; i++) {
        cin >> p[i];
    }
    sort(p.begin(), p.end());

    while(r >= l) {
        if(r == l) {
            ans++;
            break;
        }

        if(p[l] + p[r] > x) {
            ans++; r--;
        }
        else {
            ans++; l++; r--;
        }
    }
    cout << ans;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();
}