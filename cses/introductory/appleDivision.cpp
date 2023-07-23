// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define double long double

const int MAX = 1e6 + 10;
const int MIN = -MAX;
const int INF = 1e9;
const int MOD = 1e9 + 7;

int sumSet(vector<int> set) {
    int s = 0;

    for(int x : set) {
        s += x;
    }
    return s;
}

void subsets(vector<int> &set, vector<int> &subset, int i, int &totalSum, int &ans) {
    if(set.size() == i) {
        int sum = sumSet(subset);
        int diff = abs(2 * sum - totalSum);
        ans = min(ans, diff);
    }
    else {
        subset.push_back(set[i]);
        subsets(set, subset, i + 1, totalSum, ans);

        subset.pop_back();
        subsets(set, subset, i + 1, totalSum, ans);
    }
}

void solve() {
    int n; cin >> n;
    vector<int> set, subset;

    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        set.push_back(x);
    }
    int totalSum = sumSet(set);
    int ans = INF;

    subsets(set, subset, 0, totalSum, ans);
    cout << ans;
}

int32_t main() {
    int tc = 1;
    // cin >> tc;

    for(int t = 1; t <= tc; t++) {
        solve();
    }
    return 0;
}