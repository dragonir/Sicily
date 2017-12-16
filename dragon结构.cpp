#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
struct dragon{
	int num;
	double score;
	char name[20];
};
bool comparison(dragon a,dagon b){
	return a.score>b.score;
}
int main(){
	int n=5; dragon m[5];
	for(int i=1; i<=n;i++){
	scanf("%d%d%s",&m[i].num,&m[i].score,m[i].name);
	}
   vector(dragon) m(5);
	for(int i=1; i<=n;i++) printf("学号 %d\n分数 %.2lf\n姓名 %s\n",m[i].num,m[i].score,m[i].name);
	/*scanf("%d%d%s",&n.num,&n.score,n.name);
	n.num=100;
	n.score=100;
	strcpy(n.name,"ALICE");
	printf("学号 %d\n分数 %.2lf\n姓名 %s\n",n.num,n.score,n.name);*/
	return 0;
} 
