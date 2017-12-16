#include <algorithm>
#include <iostream>
#include <string>
#include <cstdio>
#include <queue>
#include <cstring>
#include <vector>
#include <iomanip>
#include <map>
#include <stack>
#include <list>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    int u, l, r, d;
    cin >> u >> l >> r >> d;
    vector<vector<char> > b(n + u + d);
    for (int i = 0; i < b.size(); i++) {
        vector<char> line(m + l + r);
        b[i] = line;
    }
    for (int i = 0; i < b.size(); i++) {
        for (int j = 0; j < b[i].size(); j++) {
            if ((i + j) % 2) b[i][j] = '.';
            else b[i][j] = '#';
        }
    }
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        for (int j = 0; j < s.size(); j++) {
            b[u + i][l + j] = s[j];
        }
    }
    for (int i = 0; i < b.size(); i++) {
        for (int j = 0; j < b[i].size(); j++) {
            cout << b[i][j];
        }
        cout << endl;
    }
    return 0;
}                                 

