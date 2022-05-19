#include <iostream>
using namespace std;
int main() {
	int days_rested = 0;
	int last_activity = 0;
	int n;
	cin >> n;
	int x;
	for (int i = 0; i < n; i++) {
		cin >> x;
		if (x == 0) {
			days_rested++;
			last_activity = 0;
		}
		else if (x == 1)
		{
			if (last_activity == 2)
			{
				days_rested++;
				last_activity = 0;
			}
			else
				last_activity = 2;
		}
		else if (x == 2) {
			if (last_activity == 1)
			{
				days_rested++;
				last_activity = 0;
			}
			else
				last_activity = 1;
		}
		else if (x == 3) {
			if (last_activity == 1)
			{
				last_activity = 2;
			}
			else if (last_activity == 2)
			{
				last_activity = 1;
			}
		}
	}
	cout << days_rested;
}