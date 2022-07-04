#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(NULL);
	cin.tie(0);
	cout.tie(0);
	vector <int> numbers(4);
	for (int& x : numbers)
		cin >> x;
	sort(numbers.begin(), numbers.end());
	int a = 0, b = 0, c = 0;
	a = numbers[3] - numbers[0];
	b = numbers[3] - numbers[1];
	c = numbers[3] - numbers[2];
	cout << a << " " << b << " " << c;
	
}