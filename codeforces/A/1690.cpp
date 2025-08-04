// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    int a = n / 3, b = (n / 3) + 1, c = (n / 3) - 1;

    if(n % 3 != 0) b++;
    if(n % 3 == 2) a++;
    cout << a << ' ' << b << ' ' << c << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}