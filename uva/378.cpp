#include <iostream>
#include <cmath>
#define ER 1e-6
#define xx first
#define yy second


using namespace std;
using Point=pair<double,double>;

bool equals(double a, double b) { return fabs(a-b) < ER;}
class Line{
    public:
        double a,b,c;
        Line(const Point& p, const Point& q){
            a = p.yy-q.yy;
            b = q.xx - p.xx;
            c = p.xx*q.yy - p.yy*q.xx;
            double k = a?a:b;
            a/=k;b/=k;c/=k;
        }
        bool operator==(const Line& r) const { 
            return (equals(a,r.a) && equals(b,r.b) && equals(c,r.c));
        }
};

pair<int, Point> intersections(const Line& r, const Line& s){
    double det = r.a * s.b - r.b * s.a;
    if (equals(det, 0.0)) {
        // Coincidentes ou paralelas
        int qtd = (r == s) ? -1 : 0;

        return pair<int, Point>(qtd, Point()); 
    } else {
        // Concorrentes
        double x = (-r.c * s.b + s.c * r.b) / det;
        double y = (-s.c * r.a + r.c * s.a) / det;
        return pair<int, Point>(1, Point(x, y));
    }
}
int main(){
    int N;
    scanf("%d",&N);
    printf("INTERSECTING LINES OUTPUT\n");
    while(N--){
        int px,py,qx,qy,rx,ry,sx,sy;
        scanf("%d %d %d %d %d %d %d %d",&px,&py,&qx,&qy,&rx,&ry,&sx,&sy);
        Point p(px,py),q(qx,qy),r(rx,ry),s(sx,sy);
        
        pair<int,Point> k = intersections(Line(p,q),Line(r,s));
        if(k.xx == 1) printf("POINT %.2lf %.2lf\n",k.yy.xx,k.yy.yy);
        else if(k.xx == -1) printf("LINE\n");
        else printf("NONE\n");
    }
    printf("END OF OUTPUT\n");
    return 0;
}

