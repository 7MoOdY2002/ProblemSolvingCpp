//link https://codeforces.com/problemset/problem/1462/B
#include <iostream>
#include <string>
using namespace std;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	string s;
	int n;
	while (t--) {
		cin >> n;
		cin >> s;
		if (s[0] == '2' && s[1] == '0' && s[n - 1] == '0' && s[n - 2] == '2')
			cout << "YES\n";
		else if (s[0] == '2' && s[1] == '0' && s[2] == '2' && s[n - 1] == '0')
			cout <<  "YES\n";
		else if (s[0] == '2' && s[1] == '0' && s[2] == '2' && s[3] == '0')
			cout << "YES\n";
		else if (s[0] == '2' && s[n - 3] == '0' && s[n - 1] == '0' && s[n - 2] == '2')
			cout <<  "YES\n";
		else if (s[n - 4] == '2' && s[n - 3] == '0' && s[n- 1] == '0' && s[n - 2] == '2')
			cout <<  "YES\n";
		else
			cout << "NO\n";
	}
}