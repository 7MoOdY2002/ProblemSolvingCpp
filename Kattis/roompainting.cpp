#include <iostream>
#include <algorithm>
#include <vector>
typedef long long ll;
using namespace std;
vector<int> cans;
int bs(int lf, int rg, int x) {
	int mid = (lf + rg) / 2;
	if (lf >= rg)
		return rg;
	if (cans[mid] == x) {
		return mid;
	}
	if (cans[mid] > x) {
		return bs(lf, mid - 1, x);
	}
	if (cans[mid] < x) {
		return bs(mid + 1, rg, x);
	}
}
int main() {
	int n, m, x, y;
	ll sum = 0;
	cin >> n >> m;
	for (int i = 0; i < n; ++i) {
		cin >> x;
		cans.push_back(x);
	}
	sort(cans.begin(), cans.end());
	while (m--) {
		cin >> x;
		y = bs(0, n - 1, x);
		if (cans[y] < x)
			y++;
		//cout << y << " ";
		sum += (cans[y] - x);
	}
	cout << sum << endl;
}
