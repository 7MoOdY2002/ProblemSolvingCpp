#include <iostream>
#include <vector>
using namespace std;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, m;
	char x;
	cin >> n >> m;
	vector<vector<char>> vec;
	// this is how you are reading a bidimensional table using vector of vector
	for (int i = 0; i < n; i++)
	{
		vector<char> vect;
		for (int j = 0; j < m; j++)
		{
			cin >> x;
			vect.push_back(x);

		}
		vec.push_back(vect);
	}
	/*for (auto& it : vec) {
		for (auto& i : it)
			cout << i << ' ';
		cout << '\n';
	}*/
	// in case you don't know how to print a 2D vector using for auto
	if (n < 2 || m < 2)
	{
		if (n == 1 && m >= 2) {
			for (int i = 0; i < m; i++)
				if (vec[0][i] == '.')
					vec[0][i] = 'D';
				else
				if (i == 0)
					if (vec[0][i] == 'S' && vec[0][1] == 'W')
					{
						cout << "NO";
						return 0;
					}else if(i == m -1)
						if(vec[0][i]=='S' && vec[0][i-1] == 'W')
						{
							cout << "NO";
							return 0;
						}else if(i > 0 && i <m-1)
							if(vec[0][i] == 'S' && vec[0][i-1] == 'W' && vec[0][i+1])
							{
								cout << "NO";
								return 0;
							}
							
		}
		if (m == 1 && n >= 2) {
			for (int i = 0; i < n; i++)
				if (vec[i][0] == '.')
					vec[i][0] = 'D';
				else
				if (i == 0)
					if (vec[i][0] == 'S' && vec[1][0] == 'W')
					{
						cout << "NO";
						return 0;
					}
					else if (i == n - 1)
						if (vec[i][0] == 'S' && vec[i-1][0] == 'W')
						{
							cout << "NO";
							return 0;
						}
						else if (i > 0 && i < n - 1)
							if (vec[i][0] == 'S' && vec[i-1][0] == 'W' && vec[i+1][0])
							{
								cout << "NO";
								return 0;
							}
						
		}
	}
		else {
			for (int i = 0; i < n; i++)
				for (int j = 0; j < m; j++) {
					if (vec[i][j] == 'S' && (i > 0 && j > 0 && i < n - 1 && j < m - 1)) {
						if (vec[i - 1][j] == 'W' || vec[i + 1][j] == 'W' || vec[i][j - 1] == 'W' || vec[i][j + 1] == 'W')
						{
							cout << "NO";
							return 0;
						}
					}
					else if (vec[i][j] == 'S' && (i == 0 && j > 0 && j < m - 1)) {
						if (vec[i + 1][j] == 'W' || vec[i][j - 1] == 'W' || vec[i][j + 1] == 'W')
						{
							cout << "NO";
							return 0;
						}
					}
					else if (vec[i][j] == 'S' && (i > 0 && j == 0 && i < n - 1)) {
						if (vec[i + 1][j] == 'W' || vec[i][j + 1] == 'W' || vec[i - 1][j] == 'W')
						{
							cout << "NO";
							return 0;
						}
					}
					else if (vec[i][j] == 'S' && (i == 0 && j == 0)) {
						if (vec[i + 1][j] == 'W' || vec[i][j + 1] == 'W')
						{
							cout << "NO";
							return 0;
						}
					}
					else if (vec[i][j] == 'S' && (i == n - 1 && j == m - 1)) {
						if (vec[i - 1][j] == 'W' || vec[i][j - 1] == 'W')
						{
							cout << "NO";
							return 0;
						}
					}
					else if (vec[i][j] == 'S' && (i == n - 1 && j > 0 && j < m - 1)) {
						if (vec[i - 1][j] == 'W' || vec[i][j - 1] == 'W' || vec[i][j + 1] == 'W')
						{
							cout << "NO";
							return 0;
						}
					}
					else if (vec[i][j] == 'S' && (i > 0 && j == m - 1 && i != n - 1)) {
						if (vec[i - 1][j] == 'W' || vec[i + 1][j] == 'W' || vec[i][j + 1] == 'W')
						{
							cout << "NO";
							return 0;
						}
					}
					else if (vec[i][j] == 'S' && (i == n - 1 && j == 0)) {
						if (vec[i - 1][j] == 'W' || vec[i][j + 1] == 'W')
						{
							cout << "NO";
							return 0;
						}
					}
					else if (vec[i][j] == 'S' && (i == 0 && j == m - 1)) {
						if (vec[i + 1][j] == 'W' || vec[i][j - 1] == 'W')
						{
							cout << "NO";
							return 0;
						}
					}
					else if (vec[i][j] == '.')
						vec[i][j] = 'D';

				}
		}
	cout << "YES" << '\n';
	for (auto& it : vec) {
		for (auto& i : it)
			cout << i;
		cout << '\n';
	}
}
