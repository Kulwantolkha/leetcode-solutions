class Solution {
public:
    bool bfs(vector<vector<int>>& graph, vector<int>& vis, int num, int i){
        vis[i] = num;
        for(auto it : graph[i]){
            if(vis[it]==-1){
                if(!bfs(graph,vis,1-num,it))   return false; 
            }
            else if(vis[it]==num) return false;
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        int num = 0; 
        vector<int> vis(n,-1);
        for(int i=0;i<n;i++){
            if(vis[i]==-1)  if(!bfs(graph,vis,num,i)) return false;
        }
        return true;
    }
};