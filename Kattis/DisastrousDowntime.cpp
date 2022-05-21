#include <iostream>
#include <set>
#include <algorithm>
#include <queue>
using namespace std;

int main() {
	long long n, k, x;
	queue<long long>qu;
	long long maxim = 0;
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> x;
		qu.push(x);
		while (qu.front() + 1000 < x + 1)
			qu.pop();
		maxim = max((long long)qu.size(), maxim);
	}
	if (maxim % k == 0)
		cout << maxim / k;
	else
		cout << maxim / k + 1;
}
