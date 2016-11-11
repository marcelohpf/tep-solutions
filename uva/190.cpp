#include <bits/stdc++.h>
#define EPS 1e-16
double PI = 3.141592653589793;
using namespace std;
double eql(double a, double b){
    return fabs(a-b) < EPS;
}
int main(){
    double x1,y1,x2,y2,x3,y3;
    int l=0;
    while(scanf("%lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3) == 6){
        double a = 2*(x2-x1), b = 2*(y2-y1), c = 2*(x3-x1), d=2*(y3-y1);
        double det = a*d-b*c;
        if( fabs(det-0) < EPS) printf("\n");
        else {
            double k1 = (x2*x2+y2*y2) - (x1*x1+y1*y1);
            double k2 = (x3*x3+y3*y3) - (x1*x1+y1*y1);
            double cx = (k1*d - k2*b)/det;
            double cy = (a*k2 - c*k1)/det;

            double r = sqrt((cx-x1)*(cx-x1) + (cy-y1)*(cy-y1));

            double cc=2*cx,dd=2*cy,e=cx*cx+cy*cy-r*r;

            bool cxe = !eql(cx,0.0),cye = !eql(cy,0.0);
            if(cxe) printf("(x %c %.3lf)^2 ",(cx<0?'+':'-'),fabs(cx));
            else printf("x^2 ");
            if(cye) printf("+ (y %c %.3lf)^2 ",(cy<0?'+':'-'),fabs(cy));
            else printf("+ y^2 ");
            printf("= %.3lf^2\n",r);


            printf("x^2 + y^2 ");
            if( !eql(cc,0.0))
                printf("%c %.3lfx ",(cc<0?'+':'-'),fabs(cc));
            if( !eql(dd,0.0)) {
                printf("%c %.3lfy ",(dd<0?'+':'-'),fabs(dd));

            }
            if( !eql(e,0.0) ) printf("%c %.3lf = 0\n",(e>0?'+':'-'),fabs(e));
            else printf("= 0\n");
            printf("\n");
        }
    }
}
