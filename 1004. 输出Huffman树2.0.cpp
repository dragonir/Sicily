#include<cstdio>
#include<iostream> 
#include<ctime>
#include<cstring>
#include<string>
#include<stack>
#include<cctype>
#include<queue>
#include<vector>
#include<algorithm>
#include<cmath>
#include<map>
#include<stdexcept>
#include<climits>
#include <cstdlib>

using namespace std;
 
const int MAX=111; 
int n; 

struct Node { 
    int x; 
    int child,node;
	int lchild,rchild,parent; 
};  
Node tree[MAX]; 
Node result[MAX];
 
bool cmp(Node a,Node b){     
    return a.x<b.x; 
} 

int build(){     
    int head=1,tail=n; 
    while (head<tail) {      
        sort(tree+head,tree+tail+1,cmp);    
        tail++;      
        tree[tail].x=tree[head].x+tree[head+1].x;    
        tree[tail].child=0; 
        tree[tail].node=tail;     
        tree[tail].lchild=tree[head].node;     
        tree[tail].rchild=tree[head+1].node;      
        head+=2;  
    }
    for (int i=1;i<=tail;i++) 
    result[tree[i].node]=tree[i]; 
    return tree[head].node; 
} 

void LDR(int root){     
    if (result[root].x==0) return;     
    LDR(result[root].lchild);    
    cout<<result[root].child<<" ";  
    LDR(result[root].rchild); 
} 

void LRD(int root){ 
    if (result[root].x==0) return; 
    LRD(result[root].lchild); 
    LRD(result[root].rchild); 
    cout<<result[root].child<<" "; 
} 

int main() { 
    while(cin>>n) {       
        for (int i=1;i<MAX;i++) 
        tree[i].x=tree[i].node=tree[i].child=0;       
        for (int i=1;i<=n;i++){ 
            cin>>tree[i].x;           
            tree[i].node=tree[i].child=i; 
            tree[i].lchild=tree[i].rchild=tree[i].parent=0; 
        }      
            int root=build(); 
            LDR(root); 
            cout<<endl; 
            LRD(root); 
            cout<<endl; 
    } 
    return 0; 
}                                 



