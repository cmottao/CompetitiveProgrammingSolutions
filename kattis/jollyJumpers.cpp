// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve(int n) {
    vector<int> a(n), vis(n);

    for(int i = 0; i < n; i++) {
        cin >> a[i];
        vis[i] = 0;
    }

    for(int i = 1; i < n; i++) {
        if(abs(a[i] - a[i - 1]) > 0 && abs(a[i] - a[i - 1]) < n) {
            vis[abs(a[i] - a[i - 1])] = 1;
        }
    }

    for(int i = 1; i < n; i++) {
        if(!vis[i]) {
            cout << "Not Jolly" << '\n';
            return;
        }
    }
    cout << "Jolly" << '\n';
}

int main() {
    #if LOCAL
        freopen("output.txt", "w", stdout);
        freopen("input.txt", "r", stdin);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    while(cin >> n) solve(n);
}