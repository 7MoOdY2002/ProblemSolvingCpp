//link https://codeforces.com/problemset/problem/1519/B
#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	int t, n, m, k;
	cin >> t;
	while (t--) {
		cin >> n >> m >> k;
		if (n * m - 1 == k)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}