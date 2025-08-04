// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define double long double

const int MAX = 1e6 + 10;
const int MIN = -MAX;
const int MOD = 1e9 + 7;
const int oo = 1e9;

bool compare(const pair<int, int>& a, const pair<int, int>& b) {
    if(a.first != b.first) {
        return a.first > b.first;
    } 
    else {
        return a.second < b.second;
    }
}

void solve() {
    int n, k; cin >> n >> k;
    vector<pair<int, int>> a(n);

    for(int i = 0; i < n; i++) {
        int ai; cin >> ai;
        
        if(ai % k == 0) {
            a[i] = {k, i + 1};
        }
        else {
            a[i] = {ai % k, i + 1};
        }
    }
    sort(a.begin(), a.end(), compare);

    for(int i = 0; i < n; i++) {
        cout << a[i].second << ' ';
    }
    cout << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tc = 1;
    cin >> tc;

    for(int t = 1; t <= tc; t++) {
        solve();
    }
    return 0;
}