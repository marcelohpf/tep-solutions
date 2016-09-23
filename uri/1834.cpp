//Solution based in https://github.com/edsomjr/TEP/blob/master/Geometria%20Computacional/Retas.md

#include <iostream>
#include <cmath>

#define ll long long
using namespace std;
class Point{
    public:
        double x,y;
        Point(double xx,double yy):x(xx),y(yy){}

};
class Line{
    public:
        double a,b,c;
        Line(const Point& p,const Point& q){
            a=p.y-q.y;
            b=q.x-p.x;
            c=p.x*q.y - p.y*q.x;
            double k = a?a:b;
            a/=k; b/=k; c/=k;
        }
// D = 0: R pertence a reta PQ
// D > 0: R à esquerda da reta PQ
// D < 0: R à direita da reta PQ
        double dplanet(const Point& p, const Point& q, const Point& r) {
            return (p.x * q.y + p.y * r.x + q.x * r.y) - (r.x * q.y + r.y * p.x + q.x * p.y);

        }
};
int main(){
    int x1,y1,x2,y2;
    scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
    Point p1=Point(x1,y1),p2=Point(x2,y2);
    Line l = Line(p1,p2);
    int n,nn=0;
    scanf("%d",&n);
    ll hl=0,hr=0;
    int cl=0,cr=0;
    while(n--){
        int x,y,h;
        scanf("%d %d %d",&x,&y,&h);
        double k = l.dplanet(p1,p2,Point(x,y));
        if(k > 0.0) {hl+=h;cl++;}
        else if(k < 0.0) {hr+=h;cr++;}
        else nn++;
    }
    printf("Relatorio Vogon #35987-2\n");
    printf("Distancia entre referencias: %.2lf anos-luz\n",hypot(p1.x-p2.x,p1.y-p2.y));
    printf("Setor Oeste:\n");
    printf("- %d planeta(s)\n",cl);
    printf("- %ld bilhao(oes) de habitante(s)\n",hl);
    printf("Setor Leste:\n");
    printf("- %d planeta(s)\n",cr);
    printf("- %ld bilhao(oes) de habitante(s)\n",hr);
    printf("Casualidades: %d planeta(s)\n",nn);
    
    return 0;
}
