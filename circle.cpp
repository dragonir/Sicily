#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<iomanip>
#include<vector>
#include<stack>
#include<cstring>
#include<ctime>
#include<string>
#include<cgrsphics>
#include<windows.h>
using namespace std;
void main(){
	int gdriver, gmode, i, midx, midy, r;
	gdriver = DETECT;
	gmode = 0;
	initgraph(&gdriver, &gmode, "c://tc");
	midx = getmaxx() / 2;
	midy = getmaxy() / 2;
	r = midy / 4;
	for (i = 0; i < 10; i++){
		setcolor(i);
		circle(midx, midy, r + i * 10);
	}
	getch();
	closegraph();
}
