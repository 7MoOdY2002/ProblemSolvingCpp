// link https://codeforces.com/problemset/problem/755/A
#include <iostream>
using namespace std;
bool prime_test(long long n) {
	bool is_prime = true;
	if (n == 1 || n == 2)
		return true;
	for (int i = 2; i <= n / 2; ++i) {
		if (n % i == 0) {
			is_prime = false;
			break;
		}
	}
	return is_prime;
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	if (n == 1)
		cout << 3;
	else
	if (n & 1)
		cout << 1;
	else {
		
			bool that_it = false;
			int k = 0;
			while (that_it == false) {
				if (prime_test(n * k + 1) == false)
				{
					cout << k;
					return 0;
				}
				k++;
			
			
		}

	}
}