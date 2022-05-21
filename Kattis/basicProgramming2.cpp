#include <iostream>
#include <vector>
#include <unordered_map>
#include <set>
#include <algorithm>
using namespace std;
std::unordered_map<int, int> f;
vector<int> A;
set<int> B;
bool bs(int lf, int rg, int x) {
	int mid = (lf + rg) / 2;
	if (lf > rg)
		return false;
	if (A[mid] == x)
		return true;
	if (A[mid] > x) {
		return bs(lf, mid - 1, x);
	}
	if (A[mid] < x) {
		return bs(mid + 1, rg, x);
	}
}
int main() {
	int n, t, x, m, sol;
	bool ok;
	cin >> n >> t;
	for (int i = 0; i < n; ++i) {
		cin >> x;
		if (f.find(x) == f.end())
			f[x] = 1;
		else
			f[x]++;
		A.push_back(x);
	}
	sort(A.begin(), A.end());
	switch (t) {
	case 1:
		ok = false;
		for (auto it : A) {
			if (it < 7777) {
				if (bs(0, n - 1, 7777 - it)) {
					ok = true;
					break;
				}
			}
		}
		if (ok)
			cout << "Yes\n";
		else
			cout << "No\n";
		break;
	case 2:
		for (auto it : A) {
			B.insert(it);
		}
		if (A.size() != B.size()) {
			cout << "Contains duplicate\n";
		}
		else {
			cout << "Unique\n";
		}
		break;
	case 3:
		ok = false;
		for (auto it : f) {
			if (it.second > (n / 2)) {
				sol = it.first;            //daca sunt mai multe?
				ok = true;
			}
		}
		if (ok)
			cout << sol << "\n";
		else
			cout << "-1\n";
		break;
	case 4:
		m = n / 2;
		if (n % 2) {
			cout << A[m] << "\n";
		}
		else {
			cout << A[m - 1] << " " << A[m] << "\n";
		}
		break;
	case 5:
		for (auto it : A) {
			if (it >= 100 && it <= 999) {
				cout << it << " ";      //daca nu exista?
			}
		}
		break;
	}
}
