// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e6 + 10;

vector<int> a(MAX, 0);

void solve() {
    int n; cin >> n;
    int ans = 0;
    
    for(int i = 0; i < n; i++) {
        int hi; cin >> hi;

        if(a[hi]) {
            a[hi]--;
        }
        else {
            ans++;
        }

        if(hi - 1 > 0) {
            a[hi - 1]++;
        }
    }
    cout << ans;
}

int main() {
    #if LOCAL
        freopen("output.txt", "w", stdout);
        freopen("input.txt", "r", stdin);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
}