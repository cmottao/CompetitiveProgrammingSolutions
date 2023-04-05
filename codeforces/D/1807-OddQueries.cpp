// Made by Cristian Motta
#include <iostream>
using namespace std; 

#define int long long int
#define double long double

const int MAX = 1e6 + 10;
const int MIN = -MAX;

int arr[MAX];
void solve() {
    int n;
    cin >> n;
    int q;
    cin >> q;
    int s = 0;
    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;
        s += a;
        arr[i] = a;
    }
    for(int i = 0; i < q; i++) {
        int l;
        cin >> l;
        int r;
        cin >> r;
        int k;
        cin >> k;
        int s2 = s;
        for(int j = l-1; j < r; j++) {
            s2 += k - arr[j];
        }
        if(s2 % 2 == 1) {
            cout << "YES" << "\n";
        }
        else {
            cout << "NO" << "\n";
        }
    }
}

int32_t main() {
    int tc = 1;
    cin >> tc;

    for(int t = 1; t <= tc; t++) {
        solve();
    }
    return 0;
}