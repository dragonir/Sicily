#include<iostream>
#include<iomanip>
#include<cstdio>
#include<cctype>
#include<cmath>
#include<ctime>
#include<cstdlib>
#include<algorithm>
#include<vector>
#include<cstring>
#include<string>
using namespace std;
int main(){
     int L, M, start, end, m, i;
     cin >> L >> M;
     vector<bool> tree(L+1,true);
     for (m = 0; m < M; m++){
          cin >> start >> end;
          for(i = start; i <= end; i++)
          	tree[i]=false;  
     }
     cout << count(tree.begin(), tree.end(), true) << endl;
     return 0;
}
