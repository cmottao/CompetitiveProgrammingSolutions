// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    int ans = 0;
    
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            double c = 0;

            for(int k = i; k <= j; k++) {
                c += a[k];
            }

            for(int k = i; k <= j; k++) {
                if(a[k] == c / (j - i + 1)) {
                    ans++;
                    break;
                }
            }
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