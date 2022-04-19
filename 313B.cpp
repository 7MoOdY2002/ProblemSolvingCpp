//link https://codeforces.com/problemset/problem/313/B
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

void CreatePairs(string s,vector <long long>& pairs, vector <long long>& sum_pairs) {
	for (int i = 0; i < s.length() - 1; i++)
		if (s[i] == s[i + 1])
			pairs[i] = 1;
		else
			pairs[i] = 0;

	for (int i = 1; i <= s.length(); i++)
		if (i == 1) {
			sum_pairs[i] = pairs[i - 1];
		}
		else
			sum_pairs[i] += sum_pairs[i-1] + pairs[i-1];
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	string d_h;
	cin >> d_h;
	vector<long long> pairs;
	vector<long long> sum_pairs;
	pairs.resize(d_h.length() + 1, 0);
	sum_pairs.resize(d_h.length() + 1, 0);
	CreatePairs(d_h, pairs,sum_pairs);
	int t;
	cin >> t;
	//cout << t << '\n';
//	for (auto& it : pairs)
	//	cout << it << ' ';
	//for (auto& it : sum_pairs)
		//cout << it << ' ';
	while (t--) {
		int x, y;
		cin >> x >> y;
		cout << sum_pairs[y-1] - sum_pairs[x-1] << '\n';
		//cout << x << " " << y << '\n';
	}
}