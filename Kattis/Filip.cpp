#include <iostream>

using namespace std;
int main() {
	long long a, b,ac = 0,bc = 0;
	cin >> a >> b;
	
		while (a != 0) {
			ac=ac*10 +a % 10;
			a /= 10;
			bc = bc * 10 + b % 10;
			b /= 10;
		}
	
			
	
	//cout << ac << " " << bc;
	cout << max(ac, bc);
	
}
