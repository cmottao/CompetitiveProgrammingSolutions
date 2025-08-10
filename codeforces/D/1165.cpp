// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<long long> d(n), d1;
    
    for(int i = 0; i < n; i++) {
        cin >> d[i];
    }
    sort(d.begin(), d.end());

    long long x = d.back() * d.front();

    for(long long i = 2; i * i <= x; i++) {
        if(x % i == 0) {
            d1.push_back(i);
            if(x / i != i) d1.push_back(x / i);
        }
    }
    sort(d1.begin(), d1.end());

    cout << ((d == d1) ? x : -1) << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}