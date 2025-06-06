// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    long long ans = 0, x = 0, l = 0, r = n - 1;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    while(r >= l) {
        if(r == l) {
            if(a[l] != 1) ans += ((a[l] - x + 1) / 2) + 1;
            else ans++;
            break;
        } 
        else {
            if(a[l] + x >= a[r]) {
                ans += a[r] - x + 1;
                a[l] -= a[r] - x;
                x = 0;
                r--;

                if(!a[l]) l++;
            }
            else {
                ans += a[l];
                x += a[l];
                l++;
            }
        }
    }
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}