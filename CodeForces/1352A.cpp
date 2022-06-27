#include <iostream>
#include <vector>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int number_of_tests;
    int number;
    cin >> number_of_tests;
    for (int i = 0; i < number_of_tests; i++) {
        int power = 1;
        int number_s = 0;
        vector <int> numbers;
        cin >> number;
        while (number > 0) {
            if (number % 10 > 0) {
                numbers.push_back((number % 10) * power);
                number_s++;
            }
            number /= 10;
            power *= 10;
        }
        cout << number_s << '\n';
        for (int it = numbers.size()-1;it>=0;it--)
            cout << numbers[it] << ' ';
        cout << '\n';
    }
}

