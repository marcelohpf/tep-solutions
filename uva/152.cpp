#include <bits/stdc++.h>
#define MAX 1<<30
using namespace std;
class P{
public:
    double x,y,z;
    P(double xa,double ya, double za):x(xa),y(ya),z(za){}
    double dist(P other){
        return  sqrt((x-other.x)*(x-other.x)+(y-other.y)*(y-other.y)+(z-other.z)*(z-other.z));
    }
};
vector<P> p;
int menor_dist[10] = {0,0,0,0,0,0,0,0,0,0};
int main(){
    int a,b,c;

    while(scanf("%d %d %d",&a,&b,&c), a || b || c){
        p.push_back(P(a,b,c));
    }
    int size=p.size();
    for(int i=0;i<size;i++){
        double menor = MAX;
        for(int j=0;j<size;j++){
            if(i!=j)
                menor = min(menor,p[i].dist(p[j]));
        }
        if(menor<10)
            menor_dist[(int)menor]++;
    }
    for(int i=0;i<10;i++){
        printf("%4d",menor_dist[i]);
    }
    printf("\n");
    return 0;
}
