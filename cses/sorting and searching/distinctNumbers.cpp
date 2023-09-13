// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    map<int, int> numbers;

    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        numbers[x]++;
    }
    cout << numbers.size();
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();
}