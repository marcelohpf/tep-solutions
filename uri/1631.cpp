#include <iostream>
#include <cmath>

using namespace std;

using Point=pair<double,double>;
#define ER 1e-6
class Line{
    public:
        double a,b,c;
        Line(const Point& p, const Point& q){
            a = p.second - q.second;
            b = q.first - p.first;
            c = p.first*q.second - p.second*q.first;
        }
        double dist(const Point& p){
            return fabs(a*p.first+b*p.second+c)/hypot(a,b);
        }

};
double ori(const Point& P, const Point& Q, const Point& R){
    return (P.first * Q.second + P.second * R.first + Q.first * R.second) - (R.first * Q.second + R.second * P.first + Q.first * P.second);
}
bool eql(const Point& P, const Point& Q){
    return (fabs(P.first-Q.first) < ER) and (fabs(P.second-Q.second) < ER);
}
int main(){
    int n;
    Point ps[150];
    while(scanf("%d",&n), n){
        for(int i=0;i<n;i++){
            Point p;
            scanf("%lf %lf",&p.first,&p.second);
            ps[i]=p;
        }
        double ld=0.0,rd=0.0,min_distance=10e11;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(!eql(ps[i],ps[j])){
                    ld=0.0,rd=0.0;
                    Line l = Line(ps[i],ps[j]);
                    for(int k=0;k<n;k++){
                        double m = ori(ps[i],ps[j],ps[k]);
                        if(m>0) ld+=l.dist(ps[k]);
                        if(m<0) rd+=l.dist(ps[k]);
                    }
                    double dif=fabs(ld-rd);
                    if(dif < min_distance) min_distance=dif;
                }
            }
        }
        printf("%.3lf\n",min_distance);
    }
    return 0;
}
