class Solution {
public:
    void dfs(int node, vector<int> adjLis[],vector<int> &vis)
    {   
        vis[node]=1;
        for(int i: adjLis[node])
        {
            if(!vis[i])
            {
                vis[i]=1;
                dfs(i,adjLis,vis);
            }
        }

    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<int> adjLis[n];
        vector<int> vis(n+1,0);
        for(int i = 0;i<n;i++)
        {
            for(int j = 0;j<n;j++)
            {
                if(isConnected[i][j]==1)
                {
                    adjLis[i].push_back(j);
                    adjLis[j].push_back(i);
                }
            }
        }
        int cnt = 0;
        for(int i = 0;i<n;i++)
        {
            if(!vis[i])
            {
                cnt++;
                dfs(i,adjLis,vis);
            }
        }
        return cnt; 
    }
};
//Using dfs to traverse all the nodes 
//Solution submitted on leetcode 
