//link https://codeforces.com/problemset/problem/1538/A
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	int t, n, pos1=0, pos2=0, x, min1 = 105, max2 = 0;
	cin >> t;
	while (t--) {
		min1 = 105;
		max2 = 0;
		int ans = 0; 
		cin >> n;
		for (int i = 1; i <= n; i++) {
			cin >> x;
			if (x > max2)
			{
				max2 = x;
				pos2 = i;
			}
			if (x < min1) {

				min1 = x;
				pos1 = i;
			}
		}
		cout << min({ max(pos1,pos2), n - min(pos1,pos2) + 1,n - pos1 + pos2 + 1, n - pos2 + pos1 + 1}) << '\n';
	}
	
}
