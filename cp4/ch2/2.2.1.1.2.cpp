// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

bool cmp(const pair<int, int> &a, const pair<int, int> &b) {
    return (double) a.first / a.second < (double) b.first / b.second;
}

void solve() {
    int n; cin >> n;
    vector<pair<int, int>> a(n);

    for(int i = 0; i < n; i++) {
        int d, n; cin >> d >> n;
        a[i] = {d, n};
    }
    sort(a.begin(), a.end(), cmp);

    for(int i = 0; i < n; i++) {
        cout << a[i].first << ' ' << a[i].second << '\n';
    }
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