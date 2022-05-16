//link https://codeforces.com/problemset/problem/368/B
#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main() {
	
	vector<int>numberss;
	int app = 0;
	map<int, bool>aparitions;
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int numbers, tests;
	cin >> numbers >> tests;
	vector<int>frec(numbers+10,0);
	int x;
	for (int i = 1; i <= numbers; i++) {
		cin >> x;
		numberss.push_back(x);
	}
	for(int i = numbers-1;i>=0;i--)
		if (aparitions.find(numberss[i]) == aparitions.end())
		{
			app++;
			frec[i+1] = app;
			aparitions[numberss[i]] = true;
			
		}
		else {
			frec[i+1] = app;
		}
	while (tests--) {
		cin >> x;
		cout << frec[x] << '\n';
	}
	
}
