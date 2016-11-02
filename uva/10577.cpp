#include <iostream>
#include <cmath>
#define x first
#define y second
double PI = acos(-1);
using namespace std;
using dd=pair<double,double>;

// Centro do círculo circunscrito
dd circumcenter(dd A, dd B, dd C){
    double D = 2*(A.x*(B.y - C.y) + B.x*(C.y - A.y) + C.x*(A.y - B.y));

    double A2 = A.x*A.x + A.y*A.y;
    double B2 = B.x*B.x + B.y*B.y;
    double C2 = C.x*C.x + C.y*C.y;

    double x = (A2*(B.y - C.y) + B2*(C.y - A.y) + C2*(A.y - B.y))/D;
    double y = (A2*(C.x - B.x) + B2*(A.x - C.x) + C2*(B.x - A.x))/D;

    return dd(x, y);
}
dd rotate(dd A, double alf){
    double x = cos(alf) * A.x - sin(alf)*A.y;
    double y = sin(alf) * A.x + cos(alf)*A.y;
    return dd(x,y);
}

dd crotate(dd A, double alf, dd C){
    A.x -= C.x; A.y -= C.y; // translate -C
    A = rotate(A,alf); // Rotate alf
    A.x += C.x; A.y += C.y; // translate +C
    return A;
}
double dist(double a, double b, double c, double d){
    return sqrt((a-c)*(a-c) + (b-d)*(b-d));
}
double area(dd mi, dd ma){
    double l1 = dist(ma.x,ma.y,mi.x,ma.y);
    double l2 = dist(mi.x,ma.y,mi.x,mi.y);
    return l1*l2;
}
int main(){
    int sides,cont=1;
    while(scanf("%d",&sides), sides){
        dd a,b,c;
        scanf("%lf %lf",&a.x,&a.y);
        scanf("%lf %lf",&b.x,&b.y);
        scanf("%lf %lf",&c.x,&c.y);
        double angle = 2*PI/(sides*1.0);
        dd C = circumcenter(a,b,c);
        dd mi(a.x,a.y),ma(a.x,a.y);
        for(int i=1; i < sides; i++){
            a = crotate(a,angle,C);
            
            // Obtain max and min cordinates
            mi.x=min(mi.x,a.x);mi.y=min(mi.y,a.y);
            ma.x=max(ma.x,a.x);ma.y=max(ma.y,a.y);
        }
//        cout << mi.x << ' '<< mi.y<<' '<<ma.x<<' '<<ma.y<<endl;
        printf("Polygon %d: %.3lf\n",cont++,area(mi,ma));
    }
    return 0;
}
