#include <bits/stdc++.h>
#define EPS 1e-6
double PI = 3.141592653589793;
using namespace std;
int main(){
    double x1,y1,x2,y2,x3,y3;
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

            printf("%.2lf\n", 2*PI*r);
        }
    }
}
