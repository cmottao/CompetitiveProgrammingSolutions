// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

const int oo = 1e9;

long long n, ss = 0, ts = 0, ans = oo;
vector<int> p;

void search(int i) {
    if(i == n) {
        ans = min(ans, abs((2 * ss) - ts));
    }
    else {
        ss += p[i];
        search(i + 1);

        ss -= p[i];
        search(i + 1);
    }
}

void solve() {
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        int pi; cin >> pi;
        p.push_back(pi);
        ts += p[i];
    }

    search(0);
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