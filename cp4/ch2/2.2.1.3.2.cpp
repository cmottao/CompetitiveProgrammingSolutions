// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

// Time complexity: O(n^2)
void solve() {
    int n, v; cin >> n >> v;
    vector<int> a(n);
    
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
            if(a[i] + a[j] == v) {
                cout << "YES";
                return;
            }
        }
    }
    cout << "NO";
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