// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

const long long oo = 1e15;

void solve() {
    int n; cin >> n;
    vector<long long> a;
    long long bst = -oo, sum = -oo;
    
    for(int i = 0; i < n; i++) {
        long long ai; cin >> ai;

        if(!i) {
            a.push_back((abs(ai) % 2) ? 0 : 1); 
        }
        a.push_back(ai);
    }

    for(int i = 1; i <= n; i++) {
        if(abs(a[i] % 2) != abs(a[i - 1]) % 2) {
            sum = max(sum + a[i], a[i]);
        }
        else {
            sum = max(-oo, a[i]);
        }
        bst = max(bst, sum);
    }
    cout << bst << '\n';
}

int main() {
    #if LOCAL
        freopen("output.txt", "w", stdout);
        freopen("input.txt", "r", stdin);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}