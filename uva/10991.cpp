#include <iostream>
#include <cmath>
#define EPS 1e-6
using namespace std;
double A(const double& a, const double& b, const double& c){
    double s=(a+b+c)/2.0;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}
double angle(const double& a, const double& b, const double& c){
    return acos( (a*a - b*b - c*c)/(-2*c*b));
}
double sector(const double& alfa, const double &raio){
    return raio*raio*alfa/2.0;
}
int main(){
    double r1,r2,r3;
    int tc;
    scanf("%d",&tc);
    while( tc--){
        scanf("%lf %lf %lf",&r1,&r2,&r3);
        double a = r1+r2, b=r1+r3, c=r2+r3;
        double ar = A(a,b,c);
        double alfa = angle(a,b,c);
        double beta = angle(b,a,c);
        double gama = angle(c,a,b);
        double seca = sector(alfa,r3);
        double secb = sector(beta,r2);
        double secc = sector(gama,r1);
        double area = ar-(seca+secb+secc);
        if(-EPS <= area && area <= EPS) printf("0.000000\n");
        else printf("%.6lf\n",area);
        
    }
    return 0;
}
