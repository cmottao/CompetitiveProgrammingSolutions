// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n; cin >> n;

    if((n * (n + 1) / 2) % 2 == 0) {
        cout << "YES" << endl;

        long long set1 = n / 2;
        cout << set1 << ' ';

        for(long long i = 1; i <= set1 / 2; i++) {
            cout << i << ' ';
        }
        for(long long i = n; i > n - ((set1 / 2) + (set1 % 2)); i--) {
            cout << i << ' ';
        }
        cout << '\n';

        long long set2 = (n / 2) + (n % 2);
        cout << set2 << '\n';

        for(long long i = set1 / 2 + 1; i <= n - ((set1 / 2) + (set1 % 2)); i++) {
            cout << i << ' ';
        }
    }
    else {
        cout << "NO";
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();
}