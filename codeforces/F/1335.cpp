// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

vector<char> a, g;
vector<vector<int>> c;
vector<int> color, parent;
int n, m, cycle_start, cycle_end;

struct UnionFind {
    vector<int> rank, parent, setSize;

    UnionFind(int size) {
        rank.assign(size, 0);
        parent.assign(size, 0);
        setSize.assign(size, 1);
        for(int i = 0; i < size; i++) {
            parent[i] = i;
        }
    }

    int findSet(int i) {
        if(parent[i] == i) return i;
        return parent[i] = findSet(parent[i]);
    }

    void unionSet(int i, int j) {
        int x = findSet(i), y = findSet(j);
        if(x == y) return;

        if(rank[x] > rank[y]) swap(x, y);
        parent[x] = y;
        if(rank[x] == rank[y]) rank[y]++;
        setSize[y] += setSize[x];
    }

    int sizeOfSet(int i) {
        return setSize[findSet(i)];
    }
};

int nxt(int i, char move) {
    if(move == 'U') return i - m;
    if(move == 'D') return i + m;
    if(move == 'L') return i - 1;
    return i + 1;
}

bool dfs(int v) {
    color[v] = 1;
    int u = nxt(v, g[v]);

    if(!color[u]) {
        parent[u] = v;
        if(dfs(u)) return true;
    }
    else if(color[u] == 1) {
        cycle_end = v;
        cycle_start = u;
        return true;
    }
    color[v] = 2;
    return false;
}

void solve() {
    cin >> n >> m;
    UnionFind uf(n * m);

    a.resize(n * m);
    g.resize(n * m);
    c.assign(n * m, {});
    color.assign(n * m, 0);
    parent.assign(n * m, -1);

    for(int i = 0; i < n * m; i++) {
        cin >> a[i];
    }

    for(int i = 0; i < n * m; i++) {
        cin >> g[i];
        uf.unionSet(i, nxt(i, g[i]));
    }

    for(int i = 0; i < n * m; i++) {
        c[uf.findSet(i)].push_back(i);
    }

    for(int i = 0; i < n * m; i++) {
        if(c[i].empty()) continue;
        vector<int> cycle;
        cycle_start = -1;

        cout << "Component: ";

        for(int v : c[i]) {
            cout << v << ' ';
        }
        cout << '\n';

        for(int v : c[i]) {
            if(!color[v] && dfs(v)) break;
        }

        for(int v = cycle_end; v != cycle_start; v = parent[v]) {
            cycle.push_back(v);
        }
        cycle.push_back(cycle_start);
        reverse(cycle.begin(), cycle.end());

        cout << "Cycle found: ";
        for(int v : cycle) {
            cout << v << ' ';
        }
        cout << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}