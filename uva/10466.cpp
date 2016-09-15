#include <iostream>
#include <cmath>
#include <cstdio>

double PI = acos(-1);
using namespace std;

class Point{
    public:
        double x,y,t;
        Point(double xx,double yy): x(xx),y(yy){}
        void rotate(double angle){
            double x = cos(angle) * this->x - sin(angle) * this->y;
            double y = sin(angle) * this->x + cos(angle) * this->y;
            this->x=x;this->y=y;
        }
        void translate(const Point& a){
            this->x = this->x+a.x;
            this->y = this->y+a.y;
        }
};


int main(){
    int n,T;
    while(scanf("%d %d",&n,&T)==2){
        Point last = Point(0,0);
        for(int i=0;i<n;i++){
            if(i) printf(" ");
            int r,t;
            scanf("%d %d",&r,&t);
            double rotations = 2.0*PI*T/(t*1.0);
            Point p = Point(r,0);
            p.rotate(rotations);
            p.translate(last);
            last=p;
            printf("%.4lf",hypot(p.x,p.y));
        }
        printf("\n");
    }
    return 0;
}
