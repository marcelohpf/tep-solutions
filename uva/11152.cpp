#include <iostream>
#include <cmath>
using namespace std;
double PI = acos(-1);
double P(double a, double b, double c){ return a+b+c;}
double A(double a, double b, double c){
    double S = P(a,b,c)/2.0;
    return S*(S-a)*(S-b)*(S-c);
}
double circ(double a, double b, double c, double AA){
    return PI*(a*a*b*b*c*c)/(AA*16);

}
double insc(double a, double b, double c, double AA){
    double p = P(a,b,c);
    return ((4*AA)/(p*p))*PI;

}
int main(){
    int a,b,c;
    while(scanf("%d %d %d",&a,&b,&c)==3){
        double tri = A(a,b,c);
        double cir = circ(a,b,c,tri);
        double ins = insc(a,b,c,tri);
        tri=sqrt(tri);
        printf("%.4lf %.4lf %.4lf\n",cir-tri,tri-ins,ins);
    }
}
