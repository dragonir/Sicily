#include<cstdio> 
struct employee {  
	int num; char name[20]; double jbgz, jj, bx, sfgz; 
};
double count_sfgz(employee m){
	return m.jbgz+m.jj-m.bx; 
	} 
int main() {
	int i, n; employee e;   
	printf("������ְ������n: "); 
	scanf("%d", &n); 
	for(i=1;i<=n;i++) {
		printf("�������%d��ְ������Ϣ: ", i); 
		scanf("%d%s", &e.num, e.name); 
		scanf("%f%f%f", &e.jbgz, &e.jj, &e.bx); e.sfgz=count_sfgz(e); 
		printf("���:%d ����:%sʵ������:%.2f\n", e.num, e.name, e.sfgz); 
	} 
	return 0; 
}
