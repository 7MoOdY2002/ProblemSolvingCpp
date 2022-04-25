#include <iostream>
#include <unordered_map>
using namespace std;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	unordered_map<int,int> train_1;
	unordered_map<int,int> train_2;
	int n, s;
	cin >> n >> s;
	int x;
	for (int i = 1; i <= n; i++)
	{
		cin >> x;
		train_1[i] = x;
	}
	for (int i = 1; i <= n; i++)
	{
		cin >> x;
		train_2[i] = x;
	}
	if (train_1[1] == 0) {
		cout << "NO";
	}
	else if (train_1[s] == 1)
		cout << "YES";
	else {
		int pos = 0;
		for(int i=n;i>=0;i--)
			if (train_1[i] == 1 && train_2[i] == 1)
			{
				pos = i;
				break;
			}
		if (s <= pos && train_2[s]!=0)
			cout << "YES";
		else
			cout << "NO";
	}
}