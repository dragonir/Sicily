#include <cstdio>
#include <cstring>
int main(){
	int t,len;
	char a[111], b[111];
	int x, y, w;
	scanf("%d", &t);
	while(t--){
		scanf("%s %s", a, b);
		len = strlen(a);
		x = y = 0;
		w = 1;
		for(int i = 0; i < len; i++, w *= 10){
			x += (a[i] - '0') * w;
		}
		len= strlen(b);w = 1;
		for(int i = 0; i < len; i++, w *= 10){
			y += (b[i] - '0') * w;
		}
		printf("%d\n", x + y);
	}
	return 0;	
}

