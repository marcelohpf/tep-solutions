#include <iostream>
#include <cstdio>
#include <cmath>
#define EPS 1e-6
using namespace std;
double rg = acos(-1)/2.0;

bool equals(double a, double b){
    return fabs(a-b) < EPS;
}
bool classification_by_angles(double a, double b, double c) {
    double cc=c*c,bb=b*b,aa=a*a;
    if( equals( acos((cc - aa - bb)/(-2*a*b)),rg)) return true;
    if( equals(acos((bb - aa - cc)/(-2*a*c)),rg)) return true;
    if( equals(acos((aa - bb - cc)/(-2*b*c)),rg)) return true;
    return false;
}

int main(){
    int a,b,c;
    while(scanf("%d %d %d",&a,&b,&c), a||b||c){
        printf("%s\n", (classification_by_angles(a,b,c)? "right":"wrong"));
    }
    return 0;
}
