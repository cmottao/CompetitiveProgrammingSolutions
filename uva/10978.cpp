// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve(int n) {
    vector<string> a(n);
    int j = -1;

    for(int i = 0; i < n; i++) {
        string c, w; cin >> c >> w;
        int x = w.size();

        while(x) {
            j = (j + 1) % n;
            x -= (a[j] == "");
        }
        a[j] = c;
    }

    cout << a[0];
    for(int i = 1; i < n; i++) {
        cout << ' ' << a[i];
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

    int n;
    while(cin >> n && n) solve(n);
}