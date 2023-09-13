// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n; cin >> n;
    long long s = (n * (n + 1)) / 2;
 
    for(int i = 0; i < n-1; i++) {
        int x; cin >> x;
        s -= x;
    }
    cout << s;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();
}