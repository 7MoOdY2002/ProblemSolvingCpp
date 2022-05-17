//link https://www.infoarena.ro/problema/dfs
#include <iostream>
#include <queue>
#include <vector>
#include <list>
#include <fstream>
using namespace std;
vector<bool> visited(100000 + 10, false);
void DFS(vector <int> edges[], int v) {
	
	visited[v] = true;
	for (int i = 0; i < edges[v].size(); i++)
	{
		if (visited[edges[v][i]] == false)
			DFS(edges, edges[v][i]);
	}
}
void addEdge(vector <int> edges[], int u, int v)
{
	edges[u].push_back(v);
	edges[v].push_back(u);
}
vector<int> edges[100005];
ifstream fin("dfs.in");
ofstream fout("dfs.out");
int main() {
	int N = 0;
	int M = 0;
	fin >> N;
	edges->resize(N);
	fin >> M;
	int x, y;
	for (int i = 0; i < M; i++) {
		fin >> x >> y;
		addEdge(edges, x, y);
	}
	int count = 0;
	for (int i = 1; i <= N; i++)
		if (visited[i] == false )
		{
			DFS(edges, i);
			count++;
		}
	fout << count;
}