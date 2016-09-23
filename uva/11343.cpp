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
class Segment{
    public:
        Point A,B;
        Segment(const Point& AA, const Point& BB):A(AA.x,AA.y),B(BB.x,BB.y){}
        bool contains(const Point& P) const {
            if (A.x == B.x)
                return min(A.y, B.y) <= P.y and P.y <= max(A.y, B.y);
            else
                return min(A.x, B.x) <= P.x and P.x <= max(A.x, B.x);

        }

        double D(const Point& P, const Point& Q, const Point& R){
                return (P.x * Q.y + P.y * R.x + Q.x * R.y) - (R.x * Q.y + R.y * P.x + Q.x * P.y);
        }

        bool intersect(const Segment& s) {
            double d1 = D(A, B, s.A);
            double d2 = D(A, B, s.B);

            if ((equals(d1, 0) && contains(s.A)) || (equals(d2, 0) && contains(s.B)))
                return true;
            double d3 = D(s.A, s.B, A);
            double d4 = D(s.A, s.B, B);

            if ((equals(d3, 0) && s.contains(A)) || (equals(d4, 0) && s.contains(B)))
                return true;
            return (d1 * d2 < 0) && (d3 * d4 < 0);
        }

};
int main(){
    int N,M;
    scanf("%d",&N);
    while(N--){
        scanf("%d",&M);
        int a,b,c,d;
        vector<Segment> ss;
        for(int i=0;i<M;i++){
            scanf("%d %d %d %d",&a,&b,&c,&d);
            ss.push_back(Segment(Point(a,b),Point(c,d)));
        }
        int cont=0;
        for(int i=0;i<M;i++){
            int col=0;
            for(int j=0;j<M && !col;j++){
                if(i!=j && ss[i].intersect(ss[j])) col++;
            }
            if(!col) cont++;
        }
        printf("%d\n",cont);
    }

    return 0;
}
