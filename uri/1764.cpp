#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#define MAX 40010
#define init(x) for(int i=0;i<MAX;i++) x[i]=i;
using namespace std;
vector <pair<int,pair<int,int> > > gr;

int v[MAX];

int funion(int * u,int v){
    if(u[v]==v){
        return v;
    }else{
        u[v]=funion(u,u[v]);
    }
    return u[v];
/* Iterativo
    while(u[v]!=v){
        u[v]=u[u[v]];
        v=u[v];
    }
    return v;*/
}
int total(){
    init(v);
    int s = gr.size()-1;
    int dist=0;
    while(!gr.empty()){
        int ua=funion(v,gr[s].second.first);
        int ub=funion(v,gr[s].second.second);
        if( ua !=ub ){
            v[ub]=ua;            
            dist += gr[s].first;
        }
        gr.pop_back();
        s--;
    }
    return dist;
}


bool cmp(pair<int,pair<int,int> > a, pair<int, pair<int,int> > b){ return a.first > b.first; }

int main(){
    int M,N;
    while((cin >> M >> N) && !(N==0 && M == 0)){
        gr.clear();
        int X,Y,Z;
        for(int i=0;i<N;i++){
            cin >> X >> Y >> Z;
            gr.push_back(make_pair(Z,make_pair(X,Y)));
        }
        sort(gr.begin(), gr.end(), cmp);
        cout << total() << endl;
    }
    return 0;
}
