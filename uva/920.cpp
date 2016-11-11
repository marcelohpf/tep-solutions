#include <bits/stdc++.h>
#define x first
#define y second

using namespace std;
using Point=pair<double,double>;

double distance(const Point& P, const Point& Q){
    return hypot((Q.x-P.x),(Q.y-P.y));//(x-Px)^2 + (y-Py)^2
}
int main(){
    int tc;
    scanf("%d",&tc);
    while(tc--){
        int N;
        scanf("%d",&N);
        vector<Point > montains;
        while(N--){
            int xx,yy;
            scanf("%d %d",&xx,&yy);
            montains.push_back(Point(xx,yy));
        }
        sort(montains.begin(),montains.end());
        double dist = distance(montains[montains.size()-1],montains[montains.size()-2]);
        double last_y = montains[montains.size()-2].y;
        for( int k = montains.size()-3; k>=0;k-=2){
            if(montains[k-1].y > last_y){
                /* regra de 3
                dist(A,B) = (A.y-B.y)
                 x = (A.y - last_y)
                */
                dist += (distance(montains[k-1],montains[k])*(montains[k-1].y - last_y)/(montains[k-1].y-montains[k].y));
                last_y = montains[k-1].y;
            }
        }
        printf("%.2lf\n",dist);
    }
    return 0;
}

