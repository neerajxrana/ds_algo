//Adjcency List Representation of a Graph

#include<bits/stdc++.h>
using namespace std;

void add_edge(vector<int> adj[], int u, int v){
	adj[u].push_back(v);
	//adj[v].push_back(u); In case of undirected graph
}

int main(){
	int V = 5;
	vector<int> adj[V];
	add_edge(adj, 0, 1);
	add_edge(adj, 0, 4);
	add_edge(adj, 1, 3);
	add_edge(adj, 1, 2);
	add_edge(adj, 4, 3);
	add_edge(adj, 4, 0);
	add_edge(adj, 2, 3);
	add_edge(adj, 0, 3);

	for(int i=0;i<V;i++){
		cout << i << " --> ";
		for(int v:adj[i]){
			cout << v << ", ";
		}
		cout << endl;
	}

	return 0;
}
