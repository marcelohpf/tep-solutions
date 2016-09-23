#include <iostream>
#include <queue>
#include <cstring>

#define MAX 100005
#define LIMIT 100001
int permit[MAX];
int dist[MAX];
using namespace std;

int bfs(int O,int D){
    queue<int> chn;
    chn.push(O);
    if(O==D) return 0;
    while(!chn.empty()){
        int chan=chn.front();chn.pop();
        if(!permit[chan]){
            permit[chan]=1;
            int a=chan+1;
            int b=chan-1;
            int c=-1;
            if(!(chan&1)) c=chan/2;
            int d=chan*2;
            int e=chan*3;
            if(a==D||b==D||c==D||d==D||e==D) return dist[chan]+1;
            if(a<LIMIT && !dist[a]){ 
                dist[a]=dist[chan]+1;
                chn.push(a);
            }
            if(b>0 && !dist[b]) {
                dist[b]=dist[chan]+1;
                chn.push(b);
            }
            if(c!=-1 && !dist[c]){
                dist[c]=dist[chan]+1;
                chn.push(c);
            }
            if(d<LIMIT && !dist[d]){
                dist[d]=dist[chan]+1;
                chn.push(d);
            }
            if(e<LIMIT && !dist[e]){
                dist[e]=dist[chan]+1;
                chn.push(e);
            }
        }
    }
    return -1;
    
}
int main(){
    int O,D,K;
    while(scanf("%d %d %d",&O,&D,&K),O|D|K){
        memset(permit,0,sizeof(permit));
        memset(dist,0,sizeof(dist));
        int k;
        for(int i=0;i<K;i++) { scanf("%d",&k); permit[k]=1;}
        printf("%d\n",bfs(O,D));

    }
    return 0;
}
