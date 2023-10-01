// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;
 
const int MAX = 1e3 + 10;
const int oo = 1e9;

pair<int, int> moves[] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
map<pair<int, int>, char> path = {{{1, 0}, 'D'}, {{0, 1}, 'R'}, {{-1, 0}, 'U'}, {{0, -1}, 'L'}};
int distM[MAX][MAX], distA[MAX][MAX];
pair<int, int> parent[MAX][MAX];
char l[MAX][MAX];

void solve() {
    int n, m; cin >> n >> m;
    pair<int, int> a, e = {-1, -1};
    queue<pair<int, int>> qm, q;
 
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> l[i][j];
            distM[i][j] = oo;
            distA[i][j] = 0;
 
            if(l[i][j] == 'A') {
                a = {i, j};
                q.push(a);
            }
            else if(l[i][j] == 'M') {
                distM[i][j] = 0;
                qm.push({i, j});
            }
        }
    }
 
    while(!qm.empty()) {
        pair<int, int> cur = qm.front(); qm.pop(); 
 
        for(int i = 0; i < 4; i++) {
            pair<int, int> nxt = {cur.first + moves[i].first, cur.second + moves[i].second};
 
            if(nxt.first < n && nxt.first >= 0 && nxt.second < m && nxt.second >= 0 && l[nxt.first][nxt.second] != '#' && distM[nxt.first][nxt.second] == oo) {
                distM[nxt.first][nxt.second] = distM[cur.first][cur.second] + 1;
                qm.push(nxt);
            }
        }
    }
 
    while(!q.empty()) {
        pair<int, int> cur = q.front(); q.pop();
 
        if(cur.first == 0 || cur.first == n - 1 || cur.second == 0 || cur.second == m - 1) {
            e = {cur.first, cur.second};
            break;
        }
 
        for(int i = 0; i < 4; i++) {
            pair<int, int> nxt = {cur.first + moves[i].first, cur.second + moves[i].second};
 
            if(nxt.first < n && nxt.first >= 0 && nxt.second < m && nxt.second >= 0 && l[nxt.first][nxt.second] != '#' && !distA[nxt.first][nxt.second] && distA[cur.first][cur.second] + 1 < distM[nxt.first][nxt.second]) {
                distA[nxt.first][nxt.second] = distA[cur.first][cur.second] + 1;
                parent[nxt.first][nxt.second] = cur;
                q.push(nxt);
            }
        }
    }
 
    if(e.first == -1) {
        cout << "NO";
    }
    else {
        cout << "YES" << '\n';
        string ans = "";
 
        while(e != a) {
            ans += path[{e.first - parent[e.first][e.second].first, e.second - parent[e.first][e.second].second}];
            e = parent[e.first][e.second];
        }
        reverse(ans.begin(), ans.end());
 
        cout << ans.size() << '\n';
        cout << ans;
    }
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