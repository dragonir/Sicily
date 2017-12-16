#include<iostream>
#include<cstdio>
#include<cstring>
#include<cctype>
#include<string>
#include<algorithm>
#include<stack>
#include<vector>
#include<queue>
#include<iomanip>
#include<cmath>
#include<ctime>
#include<climits>

using namespace std;


int color[1002];  //0表示未走,  1表示黑色，-1表示白色 
bool visited[1002];
vector<int>v[1002];
int n, m;
queue<int>q;

bool bfs()
{
    memset(color, 0, sizeof(color));
    memset(visited, false, sizeof(visited));
    
    color[1] = 1;
    q.push(1);
    while (!q.empty()){
        int a = q.front();
        q.pop();
        visited[a] = true;
        int size = v[a].size();
        for (int i = 0; i < size; i++){
            int b = v[a][i];
            if (visited[b])
               continue;
            if (color[a] != color[b]){
                 color[b] = color[a] == -1 ? 1 : -1;
                 q.push(b);  
            }
            else
                return false;
        }
    }    
    return true;    
}

int main()
{
    cin >> n >> m;
    int a, b;
    for (int i = 0; i < m; i++){
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);    
    }
    if (bfs())
        cout << "yes" << endl;
    else
        cout << "no" << endl;
    //system("PAUSE");
    return 0;    
}
