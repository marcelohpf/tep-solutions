#include <bits/stdc++.h>

using namespace std;

// X=peace1
// Z=Intersection
// Y=Center
// 4X+Y+4Z = a*a
// X+2Z = a*a - 1/4 * PI*a*a
// 2X+Y+Z= (PI/3  - sqrt(3)/4)*a^2
double PI = acos(-1);
double det(double x1,double y1,double z1,double x2, double y2, double z2, double x3, double y3, double z3){
// x1 y1 z1 x1 y1
// x2 y2 z2 x2 y2
// x3 y3 z3 x3 y3
    double d1 = x1*y2*z3, d2 = y1*z2*x3,d3= z1*x2*y3, d4=z1*y2*x3, d5=x1*z2*y3,d6=y1*x2*z3;
    return d1+d2+d3-d4-d5-d6;
}
int main(){
    double a;
    while(scanf("%lf",&a)==1){
        double A = a*a;
        double SA = A- PI*A/4.0;
        double IT = (PI/3.0 - sqrt(3)/4)*A;
        double D = det(4,1,4,1,0,2,2,1,1);
    
        double Dx = det(A,1,4,  SA,0,2,   IT,1,1);
        double Dy = det(4,A,4,  1,SA,2,   2,IT,1);
        double Dz = det(4,1,A,  1,0,SA,   2,1,IT);
        printf("%.3lf %.3lf %.3lf\n",Dy/D,4.0*Dx/D,4*Dz/D);
    }
    return 0;
}
