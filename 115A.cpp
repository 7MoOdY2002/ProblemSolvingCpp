#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
long long maxi;
void DFS(long long start, vector<long long> v[], vector <bool>& visited, long long count) {
	visited[start] = true;
	maxi = max(count, maxi);
	//cout << start << " = " << count << ' ';
	for (int i = 0; i < v[start].size(); i++)
		if (visited[v[start][i]] == false) {
			//cout << v[start][i] << "!\n";
			DFS(v[start][i], v, visited, count+1);
		}
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	vector<long long>v[2005];
	vector<bool> visited(2005, false);
	int x;
	for (int i = 1; i <= n; i++) {
		cin >> x;
		if (x != -1)
			v[x].push_back(i);
	}
	
	for (int i = 1; i <= n; i++) {
		vector<bool> visited(2005, false);
		DFS(i,v,visited,1);
	}
	cout << maxi;
}