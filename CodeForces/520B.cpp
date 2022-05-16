#include <iostream>

using namespace std;
int m, n;
int main() {
	ios_base::sync_with_stdio(NULL);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;
	long long answer = 0;
	if (n == m) {
		cout << 0;
		return 0;
	}
	else {
		while (n != m) {
			if (m > n) {
				if (m % 2 == 1)
					m += 1;
				else
					m /= 2;
			}
			else m += 1;
			answer++;
		}
	}
	cout << answer;
}
