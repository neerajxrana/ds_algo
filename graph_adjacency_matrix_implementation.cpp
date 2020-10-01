//Adjacency Matrix Representation of a Graph

#include<bits/stdc++.h>
using namespace std;

const int V = 5;

void add_edge(int adj[V][V], int u, int v){
	adj[u][v] = 1;
}

int main(){
	int adj[V][V];
	memset(adj, 0, sizeof(adj));
	add_edge(adj, 0, 1);
	add_edge(adj, 1, 0);
	add_edge(adj, 2, 4);
	add_edge(adj, 3, 1);
	add_edge(adj, 2, 1);
	add_edge(adj, 2, 3);

	for(int i=0;i<V;i++){
		for(int j=0;j<V;j++){
			cout << adj[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}