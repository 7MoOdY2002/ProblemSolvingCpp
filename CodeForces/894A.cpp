// link https://codeforces.com/problemset/problem/894/A
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
	int ans = 0;
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	string cry;
	cin >> cry;
	string::iterator it1;
	string::iterator it2;
	string::iterator it3;
	it1 = find(cry.begin(), cry.end(), 'Q');
	if (it1!=cry.end()) 
		while (it1 != cry.end()) {
			it2 = find(it1 + 1, cry.end(), 'A');
			if(it2!=cry.end())
				while (it2 != cry.end())
				{
					it3 = find(it2 + 1, cry.end(), 'Q');
					if (it3 != cry.end()) {
						ans++;
						while (it3 != cry.end()) {
							it3 = find(it3 + 1, cry.end(), 'Q');
							if (it3 != cry.end())
								ans++;

						}
					}
					it2 = find(it2 + 1, cry.end(), 'A');
				}
			it1 = find(it1 +1, cry.end(), 'Q');
		}
	cout << ans;

}
