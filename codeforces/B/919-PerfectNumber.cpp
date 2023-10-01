// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

int f(int n) {
    int s = 0;
    
    while(n > 0) {
        s += n % 10;
        n /= 10;
    }
    return s % 10 == 0;
}

void solve() {
    int k; cin >> k;
    int s = 0, n = 10;

    while(s < k) {
        if(f(n + 9)) {
            s++;
        }
        n += 9;
    }
    cout << n;
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