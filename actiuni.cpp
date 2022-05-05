#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <utility>
#include <set>
using namespace std;
vector<vector<pair<int, int>>>actions;// companie[inregistrari[zile,nr]]
set<int> da;//zile
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, k;
    cin >> n;
    actions.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> k;
        int x, y;
        for (int j = 0; j < k; j++)
        {
            cin >> x >> y;
            da.insert(y);
            actions[i].push_back({ y, x });
        }
    }
    /*for (auto& it : actions)
    {
        for (auto& i : it)
        {
            cout << i.second << ' ' << i.first << '\n';
        }
        cout << "next\n";
    }*/
    for (auto& it : da) {
        int suma=0;
        for (auto& i : actions)
        {
            sort(i.begin(), i.end());

            auto cauta = find_if(i.begin(), i.end(), [&](pair<int, int>& val)
                {
                    return val.first == it;
                });
            if (cauta != i.end())
            {
                suma += (* cauta).second;
            }
            else
            {
                int val = 0;
                for (auto& j : i)
                {
                    if (j.first > it)
                    {
                        break;
                    }
                    val = j.second;
                }
                
                suma += val;
            }
        }
        cout << suma << ' ';
    }

}
