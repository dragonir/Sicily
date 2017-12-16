#include<cstdio>
#include<cmath>
#include<iostream>
#include<algorithm>
using namespace std;
struct student{
	string name;
	int total;
	int chinese;
	int math;
	int english;
	};
student m[110000];
bool cmp(student a,student b){
	if(a.total==b.total){
		if(a.chinese==b.chinese){
			if(a.math==b.math){
				if(a.english==b.english){
					return a.name>b.name;
				}
				return a.english>b.english;
			}
			return a.math>b.math;
		}
		return a.chinese>b.chinese;
	}
	return a.total>b.total;
}
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		//cin>>m[i].name>>m[i].chinese>>m[i].math>>m[i].english;
		scanf("%s%d%d%d",m[i].name,&m[i].chinese,&m[i].math,&m[i].english);
		m[i].total=m[i].chinese+m[i].math+m[i].english;
	}
	sort(m,m+n,cmp);
	for(int i=0;i<n;i++){
		//cout<<m[i].name<<" "<<m[i].chinese<<" "<<m[i].math<<" "<<m[i].english<<" "<<m[i].total<<endl;
		printf("%s %d %d %d %d\n",m[i].name,m[i].chinese,m[i].math,m[i].english,m[i].total);
	}
	return 0;
}
