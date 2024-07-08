#include <bits/stdc++.h>
using namespace std;

class Solution {
	private: 
		void dfs(int node, vector<int> adj[], int vis[], vector<int> &ls) {
			if(vis[node]==0)
			{	vis[node] = 1;
				ls.push_back(node);	
				// traverse all its neighbours
				for(auto it : adj[node]) {
					// if the neighbour is not visited
					if(!vis[it]) {
						dfs(it, adj, vis, ls); 
					}
				}
			}
		}
	public:
		// Function to return a list containing the DFS traversal of the graph.
		int dfsOfGraph(int V, vector<int> adj[]) {
			int vis[V] = {0}; 
			// create a list to store dfs
			int count = 0;
			vector<int> ls;
			// call dfs for starting node
			for(int start=0; start < V; start++)
			{
				if(vis[start]==0)
				{
					count++;
					dfs(start, adj, vis, ls); 
				}
			}
			return count;
		}
};

void addEdge(vector <int> adj[], int u, int v) {
	adj[u].push_back(v);
	adj[v].push_back(u);
}

int main() 
{
	vector <int> adj[8];

	addEdge(adj, 0, 1);
	addEdge(adj, 1, 2);
	addEdge(adj, 3, 4);
	addEdge(adj, 4, 5);
	addEdge(adj, 6, 7);

	Solution obj;
	int ans = obj.dfsOfGraph(8, adj);
	cout << ans << endl;

	return 0;
}
