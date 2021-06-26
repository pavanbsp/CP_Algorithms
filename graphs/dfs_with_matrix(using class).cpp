#include<bits/stdc++.h>
using namespace std;

class Graph{
        int v,e;
        vector<vector<int>> adj;
        vector<bool> vis;
        public:
                Graph(int v,int e){
                        this-> v = v;
                        this-> e = e;
                        adj = vector<vector<int> >(v, vector<int>(v));
                        //adj.resize(v,vector<int>(v,0));
                        vis.resize(v,false);
                }

                void add(int x,int y){
                        adj[x][y] = 1;
                        adj[y][x] = 1;
                }
                void dfs(int x){
                        cout << x << " ";
                        vis[x] = true;
                        for(int i=0;i<v;i++){
                               // cout << adj[x][i];
                                if(adj[x][i]==1 && !vis[i]) dfs(i);
                        }
                }
};

int main(){
        int v = 5, e = 4;
        Graph G(v, e);
        G.add(0, 1);
        G.add(0, 2);
        G.add(2, 4);
        G.add(0, 3);
        G.dfs(0);
}
