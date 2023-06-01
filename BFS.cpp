//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        int visited[V] ={0};
        visited[0]=1;
        queue<int> q;
        q.push(0);
        vector<int> bfs;
        while(!q.empty())
        {
            int node = q.front();
            q.pop();
            bfs.push_back(node);
            for(auto it : adj[node])
            {
                if(visited[it]!=1)
                {
                    visited[it]=1;
                    q.push(it);
                }
            }
        }
        return bfs;
    }
    
};



//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >>

            E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            // 		adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.bfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends
//Submission made on GeekforGeeks https://practice.geeksforgeeks.org/problems/bfs-traversal-of-graph/1
