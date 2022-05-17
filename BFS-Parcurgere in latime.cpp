#include <iostream>
#include <vector>
#include <list>
#include <utility>
#include <queue>
#include <fstream>

using namespace std;
// https://infoarena.ro/problema/bfs
vector<bool> visited(100000 + 10, 0);
vector<int> distancex(100000 + 10, 0);
void minEdgeBFS(vector <int> edges[], int u, int v, int n)
{
  
    queue <int> Q;
    distancex[u] = 0;
    Q.push(u);
    visited[u] = true;
    while (!Q.empty())
    {
        int x = Q.front();
        Q.pop();

        for (int i = 0; i < edges[x].size(); i++)
        {
            if (visited[edges[x][i]])
                continue;
     
            distancex[edges[x][i]] = distancex[x] + 1;
            Q.push(edges[x][i]);
            visited[edges[x][i]] = true;
        }
    }
  //  return distancex[v];
}

void addEdge(vector <int> edges[], int u, int v)
{
    edges[u].push_back(v);
}
ifstream fin("bfs.in");
ofstream fout("bfs.out");
vector<int> edges[100005];
int main() {
    int N = 0, M = 0, S= 0;
    int x = 0, y = 0;
    fin >> N >> M >> S;
    edges->resize(N );
    
    for (int i = 0; i < M; i++)
    {
        fin >> x >> y;
       addEdge(edges,x, y);
    }
    minEdgeBFS(edges, S, N - 1, N);
    for (int i = 1; i <= N; i++)
        if (i != S && distancex[i] == 0)
            fout << -1 << ' ';
        else 
        fout << distancex[i] << ' ';

}