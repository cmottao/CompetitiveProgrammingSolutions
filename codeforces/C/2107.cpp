// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

const long long oo = 1e12 + 10;

void solve() {
    long long n, k; cin >> n >> k;
    string s; cin >> s;
    vector<long long> a(n);
    long long sum = 0, mx = 0, l = 0, r = 0;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(s[i] == '0') a[i] = -oo;
    }

    for(int i = 0; i < n; i++) {
        if(s[i] == '0') {
            for(int j = i - 1; j >= 0; j--) {
                sum += a[j];
                l = max(l, sum);
            }
            sum = 0;

            for(int j = i + 1; j < n; j++) {
                sum += a[j];
                r = max(r, sum);
            }
            a[i] = k - l - r;
            break;
        }
    }
    sum = 0;

    for(int i = 0; i < n; i++) {
        sum = max(a[i], sum + a[i]);
        mx = max(mx, sum);
    }

    if(mx != k) cout << "NO" << '\n';
    else {
        cout << "YES" << '\n';

        for(int i = 0; i < n; i++) {
            cout << a[i] << ' ';
        }
        cout << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}