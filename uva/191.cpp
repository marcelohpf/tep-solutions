#include <iostream>
#include <cmath>
#include <vector>
#include <cstdio>
#define ER 1e-6
using namespace std;
bool equals(double a,double b){
    return fabs(a-b)<ER;
}
class Point{
    public:
        double x,y;
        Point(double xx,double yy):x(xx),y(yy){}
};
bool contains(const Point& P,const Point& A, const Point& B) {
    if (A.x == B.x)
        return min(A.y, B.y) <= P.y and P.y <= max(A.y, B.y);
    else
        return min(A.x, B.x) <= P.x and P.x <= max(A.x, B.x);

}
double det(const Point& P, const Point& Q, const Point& R){
    return (P.x * Q.y + P.y * R.x + Q.x * R.y) - (R.x * Q.y + R.y * P.x + Q.x * P.y);
}
bool intersect(const Point& P, const Point& Q,const Point& A, const Point& B){
    double d1 = det(A, B, P);
    double d2 = det(A, B, Q);
    if ((equals(d1, 0) && contains(P,A,B)) || (equals(d2, 0) && contains(Q,A,B)))
        return true;

    double d3 = det(P, Q, A);
    double d4 = det(P, Q, B);
    if ((equals(d3, 0) && contains(A,P,Q)) || (equals(d4, 0) && contains(B,P,Q)))
        return true;

    return (d1 * d2 < 0) && (d3 * d4 < 0);
}
bool same_side(const Point& A, const Point&B, const Point& C, const Point& D,const Point& P, const Point& Q){
    bool k = intersect(P,Q,A,B);
    if(k) return k;
    k=intersect(P,Q,B,C);
    if(k) return k;
    k=intersect(P,Q,C,D);
    if(k) return k;
    k=intersect(P,Q,D,A);
    if(k) return k;
    bool inside = (P.x >= min(A.x,C.x) && P.x <= max(A.x,C.x) ) && (P.y >= min(A.y,C.y) && P.y <= max(A.y,C.y));
    return inside;
}
int main(){
    int n;
    scanf("%d",&n);
    while(n--){
        int xs,ys,xe,ye,xl,yt,xr,yb;
        scanf("%d %d %d %d %d %d %d %d",&xs,&ys,&xe,&ye,&xl,&yt,&xr,&yb);
        Point P=Point(xs,ys),Q=Point(xe,ye);
        Point A=Point(xl,yt),B=Point(xl,yb);
        Point C=Point(xr,yb),D=Point(xr,yt);
        if(same_side(A,B,C,D,P,Q))
            printf("T\n");
        else
            printf("F\n");

    }

    return 0;
}


