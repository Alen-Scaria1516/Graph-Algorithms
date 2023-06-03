//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
    private:
        void dfs( int node, vector<int> &visited,vector<int> adj[],vector<int> &list)
        {
            visited[node] =1;
            list.push_back(node);
            for(int it: adj[node])
            {
                if(!visited[it])
                {
                    dfs(it,visited,adj,list);
                }
            }
            
        }
    public:
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        vector<int> visited(V);
        int node = 0;
        vector<int> list ;
        dfs(node,visited,adj,list);
        return list;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends
//Submission made on GeekForGeeks https://practice.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1
