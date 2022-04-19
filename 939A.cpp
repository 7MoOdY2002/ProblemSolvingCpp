//link https://codeforces.com/problemset/problem/939/A
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
long long n;
//vector<int>solution(5,0);

int  main() {
	
	cin >> n;
	vector<long long> v;
	v.push_back(0);
	long long x;
	for (int i = 1; i <= n; i++) {
		cin >> x;
		v.push_back(x);
	}
	//bool exists_t = false;
	for (int i = 1; i <= n; ++i)
	{
		if (v[v[v[i]]] == i && v[i] != i)
		{
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
}