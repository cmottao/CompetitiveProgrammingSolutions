// Made by Cristian Motta
#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define double long double

const int MAX = 2 * 1e5 + 10;
const int MIN = -MAX;

void solve() {
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        arr[i] = x;
    }

    int s = 0;
    for(int i = 0; i < n-1; i++) {
        if(arr[i] > arr[i + 1]) {
            s += arr[i] - arr[i + 1];
            arr[i + 1] = arr[i];
        }
    }
    cout << s; 
}

int32_t main() {
    int tc = 1;
    // cin >> tc;

    for(int t = 1; t <= tc; t++) {
        solve();
    }
    return 0;
}