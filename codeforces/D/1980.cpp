// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

int N = 2e5 + 10;

vector<int> a(N);
int n;

int f(int j) {
    vector<int> b;

    for(int i = 0; i < n; i++) {
        if(i != j) b.push_back(a[i]);
    }

    for(int i = 1; i < n-2; i++) {
        if(__gcd(b[i - 1], b[i]) > __gcd(b[i], b[i + 1])) return 0;
    }
    return 1;
}

void solve() {
    cin >> n;
    int j = -1;
    
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i = 1; i < n-1; i++) {
        if(__gcd(a[i - 1], a[i]) > __gcd(a[i], a[i + 1])) {
            j = i;
            break;
        }
    }
    cout << ((j == -1 || f(j - 1) || f(j) || f(j + 1)) ? "YES" : "NO") << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}