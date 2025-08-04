// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

struct UnionFind {
    private:
        int *rank, *parent, *setSize;
    
    public:
        UnionFind(int size) {
            rank = new int[size]; 
            parent = new int[size];
            setSize = new int[size];
    
            for(int i = 0; i < size; i++) {
                rank[i] = 0;
                parent[i] = i;
                setSize[i] = 1;
            }
        }
    
        int findSet(int i) {
            if(parent[i] == i) {
                return i;
            }
            return parent[i] = findSet(parent[i]);
        }
    
        void unionSet(int i, int j) {
            int x = findSet(i), y = findSet(j);
    
            if(x != y) {
                if(rank[x] > rank[y]) {
                    std::swap(x, y);
                }
                parent[x] = y;
    
                if(rank[x] == rank[y]) { 
                    rank[y]++; 
                }
                setSize[y] += setSize[x]; 
            }
        }
    
        int sizeOfSet(int i) {
            return setSize[findSet(i)];
        }
};

void solve() {
    int n, d; cin >> n >> d;
    UnionFind uf(n);
    int c = 1;

    for(int i = 0; i < d; i++) {
        int xi, yi; cin >> xi >> yi;
        vector<int> s, vis(n, 0);
        int ans = 0;
        xi--; yi--;

        if(uf.findSet(xi) != uf.findSet(yi)) uf.unionSet(xi, yi);
        else c++;

        for(int j = 0; j < n; j++) {
            if(!vis[uf.findSet(j)]) s.push_back(uf.sizeOfSet(j));
            vis[uf.findSet(j)] = 1;
        }
        sort(s.rbegin(), s.rend());

        for(int j = 0; j < c; j++) {
            ans += s[j];
        }
        cout << ans - 1 << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
}