// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define double long double

const int MAX = 1e6 + 10;
const int MIN = -MAX;
const int INF = 1e9;
const int MOD = 1e9 + 7;
 
vector<string> combinations(string str) {
    vector<string> strings;    
    set<char> uniquechars;
    for(char x : str) {
        uniquechars.insert(x);
    }
 
    if(str.size() == 1) {
        return {str};
    }
    else {
        for(char x : uniquechars) {
            string substr = str;
            substr.erase(substr.find(x), 1);
            vector<string> subcombinations = combinations(substr);
 
            for(string sub : subcombinations) {
                strings.push_back(x + sub);
            }
        }
        return strings;
    }
}
 
void solve() {
    string str; cin >> str;
    sort(str.begin(), str.end());
 
    vector<string> strs = combinations(str);
    cout << strs.size() << endl;
 
    for(string x : strs) {
        cout << x << endl;
    }
}
 
int32_t main() {
    int tc = 1;
    // cin >> tc;
 
    for(int t = 1; t <= tc; t++) {
        solve();
    }
    return 0;
}