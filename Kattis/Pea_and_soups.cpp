#include <iostream>
#include <string>
using namespace std;
int main() {
	int n, k;
	bool oks, okp, search;
	string name, item, sol;
	sol = "Anywhere is fine I guess";
	cin >> n;
	search = true;
	while (n--) {
		cin >> k;
		cin.get();
		getline(cin, name);
		oks = false;
		okp = false;
		while (k--) {
			getline(cin, item);
			if (search) {
				if (item == "pea soup") {
					oks = true;
				}
				if (item == "pancakes") {
					okp = true;
				}
			}
		}
		if (oks && okp) {
			sol = name;
			search = false;
		}
	}
	cout << sol << endl;
}



// 
//#include <iostream>
//#include <string>
//using namespace std;
//int main() {
//	int n, k;
//	bool oks, okp, search;
//	string name, item, sol;
//	char c;
//	sol = "Anywhere is fine I guess";
//	cin >> n;
//	while (n--) {
//		cin >> k;
//		name = "";
//		c = getchar();
//		while (c != '\n') {
//			name += c;
//			c = getchar();
//		}
//		cout << name << endl;
//		oks = false;
//		okp = false;
//		search = true;
//		while (k--) {
//			item = "";
//			c = getchar();
//			while (c != '\n') {
//				item += c;
//				c = getchar();
//			}
//			cout << item << endl;
//			if (search) {
//				if (item == "pea soup") {
//					oks = true;
//				}
//				if (item == "pancakes") {
//					okp = true;
//				}
//			}
//		}
//		if (oks && okp) {
//			sol = name;
//			search = false;
//		}
//	}
//	cout << sol << endl;
//}
