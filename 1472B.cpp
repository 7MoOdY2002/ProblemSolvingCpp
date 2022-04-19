//link https://codeforces.com/problemset/problem/1472/B
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	int n, t, x;
	cin >> t;
	while (t--) {
		int number_of_one = 0, number_of_two = 0;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			if (x == 1)
				number_of_one++;
			else
				number_of_two++;
		}
		if ((number_of_one + number_of_two * 2) % 2 != 0)
			cout << "NO\n";
		else {
			if (number_of_one != 0)
				cout << "YES\n";
			else {
				if (number_of_two % 2 == 0)
					cout << "YES\n";
				else
					cout << "NO\n";
			}
		}

	}
}