//link https://codeforces.com/problemset/problem/363/B
#include <iostream>
#include <string>
#include <vector>
using namespace std;



int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	vector<int>numbers;
	int n, k;
	cin >> n >> k;
	int x;
	for (int i = 1; i <= n; i++) {
		cin >> x;
		numbers.push_back(x);
	}
	vector<long long>p_s(n,0);
	for (auto& it : numbers)
		if (&it - &numbers[0] == 0)
			p_s[ &it - &numbers[0]] = it;
		else
			p_s[ &it - &numbers[0]] = p_s[(  &it - &numbers[0]) - 1] + it;
	//for (auto& it : p_s)
		//cout << it << ' ';
	long long min_value = 0;
	int min_position = 0;
	for (int i = 0; i < n - k + 1; i++)
		if (i == 0) {
			min_value = p_s[i + k - 1];
			min_position = i;
		}
		else {
			if (min_value > p_s[i + k - 1] - p_s[i - 1]) {
				min_position = i;
				min_value = p_s[i + k - 1] - p_s[i - 1];
			}
		}

	cout << min_position+1;
}
