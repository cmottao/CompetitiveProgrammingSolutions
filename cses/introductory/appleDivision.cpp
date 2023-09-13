// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

const int oo = 1e9;

long long n, ans = oo, totalSum = 0;
vector<int> s, subs;

long long sumSet(vector<int> set) {
    long long s = 0;

    for(int x : set) {
        s += x;
    }
    return s;
}

int subsets(int i) {
    if(i == n) {
        ans = min(ans, abs(2 * sumSet(subs) - totalSum));
    }
    else {
        subs.push_back(s[i]);
        subsets(i + 1);

        subs.pop_back();
        subsets(i + 1);
    }
    return ans;
}

void solve() {
    cin >> n;

    for(int i = 0; i < n; i++) {
        int pi; cin >> pi;
        s.push_back(pi);
        totalSum += pi;
    }
    cout << subsets(0);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();
}