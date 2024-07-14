// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

int powerOfTen(int e) {
    int s = 1;

    for(int i = 0; i < e; i++) {
        s *= 10;
    }
    return s;
}

void solve() {
    string n; cin >> n;
    cout << stoi(n) - powerOfTen(n.size() - 1) << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}