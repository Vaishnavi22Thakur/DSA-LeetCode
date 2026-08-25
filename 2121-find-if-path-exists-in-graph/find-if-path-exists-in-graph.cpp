class Solution {
public:
    vector<vector<int>>adj;
    vector<bool>visited;
    bool dfs(int node,int destination){
        if(node==destination) return true;
        visited[node]=true;
        for(int neighbour:adj[node]){
            if(!visited[neighbour]){
                if(dfs(neighbour,destination)) return true;
            }
        }
        return false;
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        adj.resize(n);
        visited.resize(n,false);
        for(int i=0;i<edges.size();i++){
            int u=edges[i][0];
            int v=edges[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        return dfs(source,destination);
    }
};