#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int n, m; //n = no. of nodes, m = no. of edges
	cin >> n >> m;
	
	vector <int> adj[n+1];
        for(int i=0; i < m; i++)
        {
                int u, v; // u, v are vertices
                cin >> u >> v;
                adj[u].push_back(v); // undirected edge
		adj[v].push_back(u); // undirected edge 
        }

        for(int i=0; i<=m; i++)
        {
                cout << i << " -> ";
                for(int j=0; j < adj[i].size(); j++)
                {
                        cout << adj[i][j] << " ";
                }
                cout << endl;
        }

}
