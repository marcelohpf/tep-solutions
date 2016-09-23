#include <iostream>
#include <cmath>
#define xx first
#define yy second
#define ER 1e-6

using namespace std;
using Point=pair<double,double>;
double distance(const Point& A, const Point& B){
    return hypot(A.xx-B.xx,A.yy-B.yy);
}
bool equals(double a,double b){ return fabs(a-b) < ER;}
class Line{
    public:
        double a,b,c;
        Line(const Point& p, const Point& q) {
            a = p.yy - q.yy;
            b = q.xx - p.xx;
            c = p.xx * q.yy - p.yy * q.xx;

            auto k = a ? a : b;
            a /= k;b /= k;c /= k;
        }

        Point closest(const Point& p) const {
            auto den = a*a + b*b;
            auto x = (b*(b*p.xx - a*p.yy) - a*c)/den;
            auto y = (a*(-b*p.xx + a*p.yy) - b*c)/den;

            return Point(x, y);
        }
};
class Segment {
    public:
        Point A,B;
        Segment(const Point& a,const Point& b):A(a),B(b){
            A=a;B=b;
        }
        bool contains(const Point& P) const {
            if (A.xx == B.xx)
                return min(A.yy, B.yy) <= P.yy and P.yy <= max(A.yy, B.yy);
            else
                return min(A.xx, B.xx) <= P.xx and P.xx <= max(A.xx, B.xx);
        }

        // Ponto mais próximo de P no segmento 
        Point closest(const Point& P) {
            Line r(A, B);

            auto Q = r.closest(P);

            if (this->contains(Q))
                return Q;

            auto distA = distance(P,A); 
            auto distB = distance(P,B);

            if (distA <= distB)
                return A;
            else
                return B;
        }
};
int main(){
    double X,Y;
    int N;
    while(scanf("%lf %lf %d",&X,&Y,&N)!=EOF){
        double x,y,dist=1e308;
        Point a,p(X,Y);
        Point c;
        scanf("%lf %lf",&x,&y);
        a = Point(x,y);
        
        for(int i=0;i<N ;i++){
            scanf("%lf %lf",&x,&y);
            Point b(x,y);
            Segment s(a,b);
            Point o = s.closest(p);
            double dis = distance(o,p);
            if(dist > dis) {c=o; dist=dis; }//cout << o.xx << " " << o.yy << endl;}
            a=b;
        }
        printf("%.4lf\n%.4lf\n",c.xx,c.yy);
        
    }
    return  0;
}
