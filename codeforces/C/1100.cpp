// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

const double pi = 3.14159265;

void solve() {
    int n, r; cin >> n >> r;
    cout << ((r * sin(pi / n)) / (1 - sin(pi / n)));
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cout.precision(8);

    solve();
}