// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define double long double

const int MAX = 1e6 + 10;
const int MIN = -MAX;
const int MOD = 1e9 + 7;
const int oo = 1e9;

bool compare(const pair<int, int>& a, const pair<int, int>& b) {
    if(a.first != b.first) {
        return a.first > b.first;
    } 
    else {
        return a.second < b.second;
    }
}

void solve() {
    string s; cin >> s;
    vector<pair<int, int>> path;
    int first = (int) s[0], last = (int) s[s.size() - 1];

    for(int i = 0; i < s.size(); i++) {
        if((int) s[i] >= min(last, first) && (int) s[i] <= max(last, first)) {
            path.push_back({(int) s[i], i + 1});
        }
    }
    (first <= last) ? sort(path.begin(), path.end()) : sort(path.begin(), path.end(), compare); 

    cout << abs(first - last) << ' ' << path.size() << '\n';
    
    for(int i = 0; i < path.size(); i++) {
        cout << path[i].second << ' '; 
    }
    cout << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tc = 1;
    cin >> tc;

    for(int t = 1; t <= tc; t++) {
        solve();
    }
    return 0;
}