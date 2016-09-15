// vector rotation
#include <cstdio>
#include <cmath>
#include <iostream>
#define PI acos(-1)/180.0

using namespace std;
class Point{
    public:
        double x,y;
        Point(double xx,double yy):x(xx),y(yy){}

};
Point mo(Point p, double angle, double dist){
    p.x+=dist*cos(angle*PI);
    p.y+=dist*sin(angle*PI);
    return p;
}
int main(){
    int n;
    scanf("%d",&n);
    while(n--){
        int nn;
        scanf("%d",&nn);
        char di[3];
        int angle=0;
        Point p(0,0);

        for(int i=0;i<nn;i++){
            double k;
            scanf("%s %lf",di,&k);
            if(di[0]=='l') angle-=k;
            else if(di[0]=='r') angle+=k;
            else if(di[0]=='b') p = mo(p,angle,-k);
            else  p = mo(p,angle,k);
        }
        printf("%d\n",(int) round(hypot(p.y,p.x)));
    }
    return 0;
}
