// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

bool prime(int n) {
    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0) {
            return false;
        }
    }
    return true;
}

void solve() {
    int n; cin >> n;

    if(n == 1 || (n != 2 && (n & (n - 1)) == 0)) {
        cout << "FastestFinger";
    }
    else if(n % 2 || n == 2) {
        cout << "Ashishgup";
    }
    else if(n % 4 != 0 && prime(n / 2)) {
        cout << "FastestFinger";
    }
    else {
        cout << "Ashishgup";
    }
    cout << '\n';
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