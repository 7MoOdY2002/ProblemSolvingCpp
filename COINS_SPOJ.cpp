//link https://www.spoj.com/problems/COINS/
#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
long long n;
unordered_map<long long,long long> map1;
long long COINS(long long n) {

	if (n <= 2)
		return map1[n] = n;
	if (map1.find(n) != map1.end())
		return map1[n];
	else map1[n] = max(n,COINS(n / 2) + COINS(n / 3) + COINS(n / 4));
	return map1[n];
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	
	//int n;
	while (cin >> n) {
		cout << COINS(n) << '\n';
	}

}