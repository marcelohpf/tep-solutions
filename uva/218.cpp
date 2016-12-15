#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <algorithm>

#define ll long long
using namespace std;

bool equals(const double& a, const double& b){
    return (fabs(a-b) < 1e-6);
}

class Point {
public:
        double x,y;
        Point(double xv = 0, double yv = 0): x(xv),y(yv) {}
        bool operator<(const Point& P) const{
            return equals(x ,P.x) ? y < P.y : x < P.x;
        }
        double dist (const Point& P){
            return hypot(x-P.x,y-P.y);
        }
};

double D(const Point& P, const Point& Q, const Point& R)
{
        return (P.x * Q.y + P.y * R.x + Q.x * R.y) - (R.x * Q.y + R.y * P.x + Q.x * P.y);
}

vector<Point> convex_hull(vector<Point>& P){
    sort(P.begin(), P.end());
    vector<Point> L;

    for (auto p : P)
    {
        while (L.size() >= 2 and D(L[L.size() - 2], L[L.size() -1], p) < 0)
            L.pop_back();

        L.push_back(p);
    }
    L.pop_back();
    reverse(P.begin(), P.end());

    for (auto p : P)
    {
        while (L.size() >= 2 and D(L[L.size() - 2], L[L.size() -1], p) < 0)
            L.pop_back();

        L.push_back(p);
    }

    L.pop_back();
    L.push_back(L.front());

    return L;
}


int main(){
    int n,tc=1;
    while(scanf("%d",&n), n){
        if(tc!=1) printf("\n");
        vector<Point> polign;
        double x,y;
        for(int i=0; i<n; i++){
            scanf("%lf %lf",&x,&y);
            polign.push_back(Point(x,y));
        }
        polign = convex_hull(polign);
        printf("Region #%d:\n",tc++);
        double per=0.0;
        for(unsigned int i=polign.size()-1; i>=1; i--){
            printf("(%.1lf,%.1lf)-",polign[i].x,polign[i].y);
            per+= polign[i].dist(polign[i-1]);
        }
        printf("(%.1lf,%.1lf)\nPerimeter length = %.2lf\n",polign[0].x,polign[0].y,per);

    }
    return 0;
}
