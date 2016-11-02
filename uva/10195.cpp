#include <iostream>
#include <cmath>
using namespace std;
double P(double a, double b, double c){ return a+b+c;}
double A(double a, double b, double c){
    double S = P(a,b,c)/2.0;
    return sqrt(S*(S-a)*(S-b)*(S-c));
}
double insc(double a, double b, double c){
    return 2*A(a,b,c)/P(a,b,c);
}
int main(){
    double a,b,c;
    while(scanf("%lf %lf %lff",&a,&b,&c)==3){
        double ins = insc(a,b,c);
        if(a+b <= c || b+c <= a || a+c <= b) ins = 0.0;
        
        printf("The radius of the round table is: %.3lf\n",ins);
    }
}
