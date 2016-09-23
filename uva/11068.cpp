#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;
using Point=pair<double,double>;
#define ER 1e-6

class Line{
    public:
        double a,b,c;
        Line(double aa,double bb,double cc):a(aa),b(bb),c(cc){}

};

bool eql(double a,double b){ return fabs(a-b)<ER;}

pair<bool,Point> intersections(const Line& r, const Line& s){
    double det = r.a*s.b-r.b*s.a;
    if(eql(det,0.0)){
        return pair<bool,Point>(false, Point());
    }else{
        return pair<bool,Point>( true, Point((-r.c*s.b+s.c*r.b)/det,(-s.c*r.a+r.c*s.a)/det ));
    }
}
int main(){
    int a,b,c,d,e,f;
    while(scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f),a|b|c|d|e|f){
        Line r=Line(a,b,c),s=Line(d,e,f);
        pair<bool,Point> i = intersections(r,s);
        if(i.first){
            printf("The fixed point is at %.2lf %.2lf.\n",-i.second.first,-i.second.second);
        }else{
            printf("No fixed point exists.\n");
        }
    }
    return 0;
}
