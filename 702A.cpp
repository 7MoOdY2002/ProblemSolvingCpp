//link https://codeforces.com/problemset/problem/702/A
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n;
vector <int> vect;
int Solve(int x, vector<int>vect) {
	int ans = 1;
	int max_ans = 0;
	for (int i = 1; i < vect.size(); i++)
		if (vect[i] <= vect[i - 1])
		{
			max_ans = max(ans, max_ans);
			ans = 1;
		}
		else
			ans++;
	max_ans = max(ans, max_ans);
	return max_ans;
}
int main() {
	cin >> n;
	int x;
	for (int i = 1; i <= n; i++) {
		cin >> x;
		vect.push_back(x);
	}
	cout << Solve(1,vect);
}