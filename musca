#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <utility>
#define ll long long

using namespace std;

int B[500000];

void aduna(int s, int d,int x)
{
    B[s] += x;
    B[d + 1] -= x;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    

    vector<int> freq;
    int n, h;
    cin >> n >> h;
    int aux;
    freq.resize(h+1, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> aux;
        if (i % 2 == 0)
        {
            aduna(1, aux, 1);
        }
        else
        {
            aduna(h - aux + 1, h, 1);
        }
    }
    for (int i = 1; i <= h; i++) {
        B[i] += B[i - 1];
        freq[i] += B[i];
        //cout << freq[i] << " ";
    }
    sort(freq.begin(), freq.end());
    /*for (int i = 1; i < h; i++)
        cout << freq[i] << ' ';
    cout << endl;*/
    int i = 2;
    while (freq[1] == freq[i])
    {
        i++;
    }
    cout << freq[1] << ' ' << i - 1;
    
    return 0;
}
