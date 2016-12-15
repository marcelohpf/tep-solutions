#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;
class Point{
    public:
        int x,y;
        Point(double xx, double yy):x(xx),y(yy){}

};
class Rectangle{
    public:
        Point P,Q;
        Rectangle(Point a, Point b): P(a),Q(b){}
        unsigned int area() const{
            return abs(P.x-Q.x)*abs(P.y-Q.y);
        }

        void intersection(const Rectangle& r) {
            auto x1 = max(P.x,r.P.x);
            auto x2 = min(Q.x,r.Q.x);
            auto y1 = max(P.y,r.P.y);
            auto y2 = min(Q.y,r.Q.y);
            if (!(x1>=x2 || y1 >= y2)) {
                P.x=x1;P.y=y1;Q.x=x2;Q.y=y2;
            }else{P.x=0;P.y=0;Q.x=0;Q.y=0;}
        }
};
int main(){
    int tc;
    scanf("%d\n",&tc);
    int xl,yl,xr,yr,l=0;
    for(int tcc=1;tcc<=tc;tcc++){
        int n;
        scanf("%d",&n);
        Rectangle s(Point(1,1),Point(1,1));
        for(int i=0;i<n;i++){
            scanf("%d %d %d %d",&xl,&yl,&xr,&yr);
            if(i==0){
                s = Rectangle(Point(xl,yl),Point(xr,yr));
            }else{
                s.intersection(Rectangle(Point(xl,yl),Point(xr,yr)));
            }
        }
        printf("Case %d: %d\n",tcc,s.area());
    }
}
