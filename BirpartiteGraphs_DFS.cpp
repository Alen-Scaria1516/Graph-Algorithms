class Solution {
    bool dfs(int node, int col,vector<int>&color, vector<vector<int>>&graph)
    {
        color[node] = col;
        for(auto i : graph[node])
        {
            if(color[i] == -1)
            {
                if(dfs(i,!col,color,graph)==false) return false;
            }
            else if(color[i]==color[node]) return false;
        }
        return true;

    }
public:
    bool isBipartite(vector<vector<int>>& graph) {
        vector<int> color(graph.size(),-1);
        for(int i = 0;i<graph.size();i++)
        {
            if(color[i] == -1)
            {
                if(dfs(i,0,color,graph)==false) return false;
            }
        }
        return true;
    }
};
//TC : O(V+ 2E)
//SC : O(V)
