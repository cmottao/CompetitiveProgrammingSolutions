// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

vector<int> primes;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    long long s = 0, s1 = 0;
    
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.rbegin(), a.rend());

    for(int i = 0; i < n; i++) {
        s += primes[i];
        s1 += a[i];

        if(s > s1) {
            cout << n - i << '\n';
            return;
        }
    }
    cout << 0 << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    vector<bool> is_prime(1e7 + 10, 1);

    for(int i = 2; i * i <= 1e7; i++) {
        if(!is_prime[i]) continue;
        
        for(int j = i * i; j <= 1e7; j += i) {
            is_prime[j] = 0;
        }
    } 

    for(int i = 2; i <= 1e7; i++) {
        if(is_prime[i]) primes.push_back(i);
    }

    int t; cin >> t;
    while(t--) solve();
}