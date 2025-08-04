// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n; 
    queue<array<int, 3>> q;
    q.push({1, 2, 3});

    while(!q.empty()) {
        array<int, 3> c = q.front(); q.pop();
        cout << "? " << c[0] << ' ' << c[1] << ' ' << c[2] << endl;
        int x; cin >> x;

        if(x == 0) {
            cout << "! " << c[0] << ' ' << c[1] << ' ' << c[2] << endl;
            return;
        }
        
        for(int i = 0; i < 3; i++) {
            q.push({c[i], c[(i + 1) % 3], x});
        }
    }
}

int main() {
    int t; cin >> t;
    while(t--) solve();
}