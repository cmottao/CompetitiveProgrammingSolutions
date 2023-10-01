// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

// Time complexity: O(n log(n))
void solve() {
    int n; cin >> n;
    map<int, int> mp;

    for(int i = 0; i < n; i++) {
        int ai; cin >> ai;
        mp[ai]++;
    }

    for(auto p : mp) {
        if(p.second > n / 2) {
            cout << p.first;
            return;
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