#include <iostream>
#include <cstdio>
#include <queue>
#include <vector>
#include <cstring>
#define MAX 505
#define ff first
#define ss second

using namespace std;
using ii=pair<int,int>;
ii biger;
vector<ii> mov {ii(-1,0),ii(0,1),ii(0,-1),ii(1,0)};

char mapa[MAX][MAX];
char mapaa[MAX][MAX];
int dist[MAX][MAX];

void dfs(ii p,int da){
    if(mapa[p.ff][p.ss]!=-1 && mapa[p.ff][p.ss]!='#' && dist[p.ff][p.ss]==0){
        mapa[p.ff][p.ss]='#';
        dist[p.ff][p.ss]=da+1;
        if(dist[p.ff][p.ss] > dist[biger.ff][biger.ss]) biger=p;
        for(auto di:mov){
            dfs(ii(p.ff+di.ff,p.ss+di.ss),da+1);
        }
    }else if(dist[p.ff][p.ss] < da && mapa[p.ff][p.ss]!=-1) dist[p.ff][p.ss] = da+1;
    
}
void dfss(ii p,int da){
    if(mapaa[p.ff][p.ss]!=-1 && mapaa[p.ff][p.ss]!='#' && dist[p.ff][p.ss]==0){
        mapaa[p.ff][p.ss]='#';
        dist[p.ff][p.ss]=da+1;
        if(dist[p.ff][p.ss] > dist[biger.ff][biger.ss]) biger=p;
        for(auto di:mov){
            dfss(ii(p.ff+di.ff,p.ss+di.ss),da+1);
        }
    }else if(dist[p.ff][p.ss] < da && mapaa[p.ff][p.ss]!=-1) dist[p.ff][p.ss] = da+1;
    
}

int main(){
    int N,M;
    while(scanf("%d %d",&N,&M),N||M){
        memset(dist,0,sizeof(dist));
        memset(mapa,-1,sizeof(mapa));
        memset(mapaa,-1,sizeof(mapaa));
        biger=ii(-1,-1);
        for(int i=1;i<=N;i++){
            for(int j=1;j<=M;j++){
                scanf(" %c",&mapa[i][j]);
                if(biger.ff == -1 &&mapa[i][j]=='.') biger=ii(i,j);
                mapaa[i][j]=mapa[i][j];
            }
        }
        dfs(biger,0);
        memset(dist,0,sizeof(dist));
        dfss(biger,-1);
        cout << dist[biger.ff][biger.ss] << endl;

    }

    return 0;
}
