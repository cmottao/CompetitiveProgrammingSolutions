// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

const int n = 7;

unordered_map<char, pair<int, int>> path = {{'D', {1, 0}}, {'R', {0, 1}}, {'U', {-1, 0}}, {'L', {0, -1}}};
pair<int, int> moves[] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
bool chs[n][n];
int ans = 0;
string p;

int wall(int i, int j) {
    return i >= n || i < 0 || j >= n || j < 0 || chs[i][j];
}

void search(int i, int j, int m) {
    if((((!wall(i, j + 1) && !wall(i, j - 1)) && (wall(i + 1, j) && wall(i - 1, j))) || ((wall(i, j + 1) && wall(i, j - 1)) && (!wall(i + 1, j) && !wall(i - 1, j)))) || (m != (n * n) - 1 && (i == n - 1 && j == 0))) {
        return;
    }

    if(m == (n * n) - 1 && (i == n - 1 && j == 0)) {
        ans++;
    }
    else {
        if(p[m] != '?') {
            int nxti = i + path[p[m]].first, nxtj = j + path[p[m]].second;
            
            if(!wall(nxti, nxtj)) {
                chs[nxti][nxtj] = 1;
                search(nxti, nxtj, m + 1);
                chs[nxti][nxtj] = 0;   
            }
        }
        else {
            for(auto p : moves) {
                int nxti = i + p.first, nxtj = j + p.second;

                if(!wall(nxti, nxtj)) {
                    chs[nxti][nxtj] = 1;
                    search(nxti, nxtj, m + 1);
                    chs[nxti][nxtj] = 0;   
                }
            }
        }
    }
}

void solve() {
    cin >> p;

    chs[0][0] = 1;
    search(0, 0, 0);
    cout << ans;
}

int main() {
    #if LOCAL
        freopen("output.txt", "w", stdout);
        freopen("input.txt", "r", stdin);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
}