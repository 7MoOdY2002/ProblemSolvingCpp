#include <iostream>
#include <unordered_map>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string x;
    while (cin >> x) {
        if (x[0] == 'a' || x[0] == 'e' || x[0] == 'i' || x[0] == 'o' || x[0] == 'u' || x[0] == 'y')
        {
            cout << x << "yay ";
        }
        else
        {
           // if (x.find("a") == string::npos && x.find("e") == string::npos && x.find("i") == string::npos && x.find("o") == string::npos && x.find("u") == string::npos)
               // cout << x << "ay ";
          
                string s = x.substr(min({ x.find("y"), x.find("a"),x.find("e"),x.find("i"),x.find("o"),x.find("u") }), x.size() - 1);
                string c = x.substr(0, min({ x.find("y"),x.find("a"),x.find("e"),x.find("i"),x.find("o"),x.find("u") }));
                cout << s << c << "ay ";
            
        }
    }

}
