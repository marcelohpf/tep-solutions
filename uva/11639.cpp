#include <iostream>
#include <cstdio>
#include <cmath>
#define BIG_AREA 100*100

using namespace std;
using interval = pair<int,int>;
class Point{
    public:
        int x,y;
        Point(double xx, double yy):x(xx),y(yy){}

};
class Rectangle{
    public:
        Point P,Q;
        Rectangle(Point a, Point b): P(a),Q(b){}
        unsigned int area(){
            return abs(P.x-Q.x)*abs(P.y-Q.y);
        }
        void intersection(const Rectangle& r, Rectangle& inter) const{
            auto x1 = max(P.x,r.P.x);
            auto x2 = min(Q.x,r.Q.x);
            auto y1 = max(P.y,r.P.y);
            auto y2 = min(Q.y,r.Q.y);
            if( !(x1>=x2 || y1 >= y2) ) 
                inter = Rectangle(Point(x1,y1),Point(x2,y2));
        }
};
int main(){
    int tcc;
    scanf("%d\n",&tcc);
    int xl,yl,xr,yr;
    for(int tc=1;tc<=tcc;tc++){
        scanf("%d %d %d %d",&xl,&yl,&xr,&yr);
        Rectangle r(Point(xl,yl),Point(xr,yr));
        scanf("%d %d %d %d",&xl,&yl,&xr,&yr);
        Rectangle t(Point(xl,yl),Point(xr,yr));;
        Rectangle s(Point(0,0),Point(0,0));
        r.intersection(t,s);
        unsigned int sec = s.area();
        unsigned int wsec = t.area()+r.area()- 2*sec;
        unsigned int usec = BIG_AREA - t.area() - r.area() + sec;
        printf("Night %d: %u %u %u\n",tc,sec,wsec,usec);
    }
}
