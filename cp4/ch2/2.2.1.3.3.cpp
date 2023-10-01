// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

// Time complexity: O(n log(n))
void solve() {
    int n, v; cin >> n >> v;
    vector<int> a(n);
    int l = 0, r = n - 1;
    
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    while(r > l) {
        if(a[l] + a[r] == v) {
            cout << "YES";
            return;
        } 
        else if(a[l] + a[r] > v) {
            r--;
        }
        else {
            l++;
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