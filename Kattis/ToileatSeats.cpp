#include <iostream>
#include <string>
using namespace std;
int main() {
	string s;
	cin >> s;
	char last_state_u,last_State_d;
	int case_up = 0, case_down = 0, case_e = 0;
	last_state_u = s[0];
	if (s[0] == 'U') {
		if (s[1] == 'U') {
			case_up = 0;
			case_down++;
			case_e=0;
		}
		else {
			case_up += 2;
			case_down++;
			case_e++;
		}
	}
	else {
		if (s[1] == 'U') {
			case_up ++;
			case_down+=2;
			case_e ++;
		}
		else {
			case_up ++;
			case_down=0;
			case_e=0;
		}
	}
	for (int i = 2; i < s.size(); i++) {
		if (s[i] == 'U') {
			case_down+=2;
			if (s[i - 1] == 'D')
				case_e++;
		}
		else {
			case_up += 2;
			if (s[i - 1] == 'U')
				case_e++;
		}
	}
	cout << case_up << '\n';
	cout << case_down << '\n';
	cout << case_e << '\n';
}
