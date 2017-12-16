#include<iostream> 
#include<cmath> 
#define SQR(x) ((x)*(x))
#define MIN(a,b) (a<b?a:b)
#define MAX(a,b) (a>b?a:b)

using namespace std;

struct point{double x, y;};

double dist(point a, point b){
    return sqrt(SQR(a.x-b.x)+SQR(a.y-b.y));
}

int main(){
    int n, cas, m;
    cin>>cas;
    while (cas--){
        point f1, f2;
        int d;
        cin>>f1.x>>f1.y>>f2.x>>f2.y>>d;
        int x1, x2, y1, y2;
        x1=MIN(f1.x, f2.x); x2=MAX(f1.x, f2.x);
        y1=MIN(f1.y, f2.y); y2=MAX(f1.y, f2.y);
        x1-=d; x2+=d;
        y1-=d; y2+=d;
        int ans=0;
        for (int x=x1; x<=x2; x++)
            for (int y=y1; y<=y2; y++){
                point tmp; tmp.x=x; tmp.y=y;
                if ((dist(f1, tmp)+dist(f2, tmp))<d) ans++;
        }
        cout << ans << endl;
    }
    return 0;
}                       
