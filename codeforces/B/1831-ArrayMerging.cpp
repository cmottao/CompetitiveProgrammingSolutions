// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define double long double

const int MAX = 1e6 + 10;
const int MIN = -MAX;
const int INF = 1e9;
const int MOD = 1e9 + 7;
 
unordered_map<int, int> reps(int arr[], int n) {
    unordered_map<int, int> r;
    int s = 1;
 
    for(int i = 0; i < n-1; i++) {
        if(arr[i] == arr[i + 1]) {
            s++;
        }
        else {
            r[arr[i]] = max(r[arr[i]], s);
            s = 1;
        }
    }
    r[arr[n - 1]] = max(r[arr[n - 1]], s);
    
    return r;
}
 
void solve() {
    int n; cin >> n;
    int ans = 0;
    int a[n], b[n];
    unordered_set<int> nums;
 
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        nums.insert(a[i]);
    }
    for(int i = 0; i < n; i++) {
        cin >> b[i];
        nums.insert(b[i]);
    }
    unordered_map<int, int> reps_a = reps(a, n);
    unordered_map<int, int> reps_b = reps(b, n);
 
    for(int x : nums) {
        ans = max(ans, reps_a[x] + reps_b[x]);
    }
    cout << ans << endl;
}
 
int32_t main() {
    int tc = 1;
    cin >> tc;
 
    for(int t = 1; t <= tc; t++) {
        solve();
    }
    return 0;
}