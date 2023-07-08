// Made by Cristian Motta
#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define double long double

const int MAX = 1e6 + 10;
const int MIN = -MAX;
const int INF = 1e9;
const int MOD = 1e9 + 7;

void solve() {
    int n, x; cin >> n >> x;
    int ans = 0;
    vector<int> p;

    for(int i = 0; i < n; i++) {
        int pi; cin >> pi;
        p.push_back(pi);
    }
    sort(p.begin(), p.end());

    int left = 0, right = n - 1;

    while(right >= left) {
        if(right == left) {
            ans++;
            break;
        }

        if(p[left] + p[right] > x) {
            ans++; right--;
        }
        else {
            ans++; left++; right--;
        }
    }
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