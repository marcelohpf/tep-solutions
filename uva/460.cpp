#include <iostream>
#include <cstdio>

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
        bool intersection(const Rectangle& r, Rectangle& inter) const{
            auto x1 = max(P.x,r.P.x);
            auto x2 = min(Q.x,r.Q.x);
            auto y1 = max(P.y,r.P.y);
            auto y2 = min(Q.y,r.Q.y);
            if (x1>=x2 || y1 >= y2) return false;
            else inter = Rectangle(Point(x1,y1),Point(x2,y2));
            return true;
        }
};
int main(){
    int tc;
    scanf("%d\n",&tc);
    int xl,yl,xr,yr,l=0;
    while(tc--){
        if(l++) printf("\n");
        scanf("%d %d %d %d",&xl,&yl,&xr,&yr);
        Rectangle r(Point(xl,yl),Point(xr,yr));
        scanf("%d %d %d %d",&xl,&yl,&xr,&yr);
        Rectangle s(Point(0,0),Point(0,0));
        Rectangle t(Point(xl,yl),Point(xr,yr));;
        if( r.intersection(t,s) ){
            printf("%d %d %d %d\n",s.P.x,s.P.y,s.Q.x,s.Q.y);
        }else{
            printf("No Overlap\n");
        }
    }
}
