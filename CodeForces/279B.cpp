#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
long long t, n;
vector <long long> vect;
vector <long long > partial_vect;
int main() {
	ios_base::sync_with_stdio(NULL);
	cin.tie(0);
	cout.tie(0);
	
	cin >> n >> t;
	vect.resize(2 * n);
	partial_vect.resize(2 * n);
	partial_vect[0] = 0;
	for (long long i = 0; i < n; i++) {
		cin >> vect[i];
		if (i > 0)
		{
			partial_vect[i] = partial_vect[i - 1] + vect[i];
		}
		else
		{
			partial_vect[i] = vect[i];
		}
	}
	long long answer = 0;
	long long position = 0;
	for (long long  i = 0; i < n; i++) {
		if(i==0)
		while (partial_vect[position]  <= t && position < n) {
			++position;
		}
		else while (partial_vect[position] - partial_vect[i-1] <= t && position < n) {
			++position;
		}

		answer = max(answer, position - i);
	}
	//if ( n == 2 && vect[0] + vect[1] == t)
		//answer++;
	cout << answer << '\n';
}
