// Center of simetry and comparision of points
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdio>
#define ER 10e-6

using namespace std;
using dd=pair<double,double>;

bool func(dd a, dd b){
    if(a.first == b.first) return a.second < b.second;
    return a.first < b.first;
}
bool eql(double a, double b){
    return fabs(a-b)<ER;
}
bool eql_p(dd a,dd b){
    return eql(a.first,b.first) && eql(a.second,b.second);
}
int main(){
    int c;
    scanf("%d",&c);
    while(c--){
        int n;
        scanf("%d",&n);
        vector<dd> ps;
        for( int i=0; i< n; i++){
            int x,y;
            scanf("%d %d",&x,&y);
            ps.push_back(dd(x,y));
        }
        sort(ps.begin(),ps.end(),func);
        vector<dd> pc;
        for(int i=0;i<n/2;i++){
            pc.push_back(dd((ps[i].first+ps[n-i-1].first)/2,(ps[i].second+ps[n-i-1].second)/2));
        }
        if(n&1) pc.push_back(ps[n/2]);
        dd compare = pc.front();
        bool eqp=true;
        for(auto d:pc){ 
            eqp=eql_p(compare,d);
            if(!eqp) break;
        }
        printf("%s\n",(eqp? "yes":"no"));
    }
    return 0;
}
