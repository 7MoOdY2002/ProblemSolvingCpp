#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <utility>
#define ll long long

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t,n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<string> numbers;
        numbers.resize(n);
        for (int i = 0; i < n; i++)
        {
            cin >> numbers[i];
        }
        sort(numbers.begin(), numbers.end());
        int i, j;
        bool ok = true;
        for (i = 0; i < n-1; i++)
        {
            if (numbers[i] == numbers[i + 1].substr(0, numbers[i].size()))
            {
                ok=false;
                break;
            }
        }
        if (ok)
        {
            cout<<"YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    
    return 0;
}
