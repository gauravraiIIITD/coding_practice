#include<bits/stdc++.h>
using namespace std;
 void add_edge(vector<int> adj[],int u,int v)
 {
 	adj[u].push_back(v);
 }
  void printg(vector<int> adj[],int v)
 {
 	int i;
 	for(i=0;i<v;i++)
 	{
 		cout<<i<<"->";
 		for(auto j:adj[i])
 		{
 			cout<<j;
 			cout<<endl;
		 }
	 }
 }
int main()
{
	int v=3;
	vector<int> adj[v];
	add_edge(adj,0,2);
	add_edge(adj,1,2);
	add_edge(adj,2,0);
	printg(adj,v);
}

