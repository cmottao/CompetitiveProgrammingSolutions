// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k; cin >> n >> k;
    vector<int> t(n);
    int mx = 0, j = 0;
    
    for(int i = 0; i < n; i++) {
        cin >> t[i];
    }

    for(int i = 0; i < n; i++) {
        if(t[i] - t[j] < 1000) {
            mx++;
        }
        else {
            j++;
        }   
    }
    cout << (mx + k - 1) / k;
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