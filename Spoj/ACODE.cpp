// link https://www.spoj.com/problems/ACODE/
#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
int ACODE(string s) {
	unordered_map <int, int> vals;
	vals[0] = 1;
	for (int i = 1; i < s.size(); i++)
	{
		if (s[i] - '0' > 0)
			vals[i] = vals[i - 1];
		int valss = 10 * (s[i - 1] - '0') + (s[i] - '0');
		if (valss >= 10 && valss <= 26) {
			if (i > 2)
				vals[i] += vals[i - 2];
			else
				vals[i] += vals[0];
		}
	}
	return vals[s.size() - 1];
}
//hello people
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	string s = "x";
	while (s != "0") {
		cin >> s;
		if (s == "0")
			break;
		cout << ACODE(s);
	}
}
