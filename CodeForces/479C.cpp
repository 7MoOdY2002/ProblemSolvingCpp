#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	int n;
	cin >> n;
	vector <pair<int, int>> exams;
	int x, y;
	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		exams.push_back({ x,y });
	}
	sort(exams.begin(), exams.end());
	int best_time_of_exam=-1;
	for (auto& it : exams) {
		if (it.second >= best_time_of_exam)
			best_time_of_exam = it.second;
		else
			best_time_of_exam = it.first;
	}
	cout << best_time_of_exam;
}