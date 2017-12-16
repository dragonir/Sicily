#include<cstdio> 
struct employee {  
	int num; char name[20]; double jbgz, jj, bx, sfgz; 
};
double count_sfgz(employee m){
	return m.jbgz+m.jj-m.bx; 
	} 
int main() {
	int i, n; employee e;   
	printf("请输入职工人数n: "); 
	scanf("%d", &n); 
	for(i=1;i<=n;i++) {
		printf("请输入第%d个职工的信息: ", i); 
		scanf("%d%s", &e.num, e.name); 
		scanf("%f%f%f", &e.jbgz, &e.jj, &e.bx); e.sfgz=count_sfgz(e); 
		printf("编号:%d 姓名:%s实发工资:%.2f\n", e.num, e.name, e.sfgz); 
	} 
	return 0; 
}
