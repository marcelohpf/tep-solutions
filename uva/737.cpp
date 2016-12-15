#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;
long long mx(long long a, long long dista, long long b, long long distb){
    return max(min(a,dista),min(b,distb));
}
long long mn(long long a, long long dista, long long b, long long distb){
    return min(max(a,dista),max(b,distb));
}

class Point{
    public:
        long long x,y,z;
        Point(const long long& xx, const long long& yy, const long long& zz):x(xx),y(yy),z(zz){}
        bool equals(const Point& o){
            return o.x==x && o.y==y && o.z==z;
        }
};
class Rectangle{
    public:
        Point cornerA;
        Point cornerB;
        Rectangle(const Point& a, const Point& b):cornerA(a),cornerB(b){}
    Rectangle intersection(const Rectangle& o){
        long long xmax = mx(cornerA.x,cornerB.x,o.cornerA.x,o.cornerB.x);
        long long xmin = mn(cornerA.x,cornerB.x,o.cornerA.x,o.cornerB.x);
               
        long long ymax = mx(cornerA.y,cornerB.y,o.cornerA.y,o.cornerB.y);
        long long ymin = mn(cornerA.y,cornerB.y,o.cornerA.y,o.cornerB.y);
        
        long long zmax = mx(cornerA.z,cornerB.z,o.cornerA.z,o.cornerB.z);
        long long zmin = mn(cornerA.z,cornerB.z,o.cornerA.z,o.cornerB.z);

        if(xmin>xmax && ymin > ymax && zmin > zmax)
            return Rectangle(Point(xmin,ymin,zmin),Point(xmax,ymax,zmax));
        return Rectangle(Point(-1,-1,-1),Point(-1,-1,-1));
    }
    long long area(){
        return (cornerA.x-cornerB.x)*(cornerA.y-cornerB.y)*(cornerA.z-cornerB.z);
    }
};
    

int main(){
    int n;
    while(scanf("%d",&n), n){
        int x,y,z,d;
        scanf("%d %d %d %d",&x,&y,&z,&d);
        Rectangle a(Point(x,y,z),Point(x+d,y+d,z+d));
        Rectangle i(Point(-1,-1,-1),Point(-1,-1,-1));
        n--;
        bool show=true;
        while(n--){
            scanf("%d %d %d %d",&x,&y,&z,&d);
            Rectangle b(Point(x,y,z),Point(x+d,y+d,z+d));
            i = a.intersection(b);
            if(!i.cornerA.equals(i.cornerB))
                a=i;
            else
                show=false;
        }
        cout << (show?a.area():0) <<endl;
    }
    return 0;
}
