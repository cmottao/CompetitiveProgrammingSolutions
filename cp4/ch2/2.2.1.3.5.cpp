// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

// Time complexity: O(n)
void solve() {
    int n; cin >> n;
    vector<int> a(n);
    int ans = 1, s = 1;
    
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(int i = 1; i < n; i++) {
        if(a[i] >= a[i - 1]) {
            s++;
        }
        else {
            s = 1;
        }
        ans = max(ans, s);
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