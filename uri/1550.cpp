#include <bits/stdc++.h>
#define ff first
#define ss second
#define ll long long
#define MAX 10002
using namespace std;
using ii=pair<ll,int>;
int visit[MAX];
ll inv(ll n){ 
    ll aux=0;
    while(n!=0){
        aux+=(n%10);
        n/=10;
        aux*=10;
    }
    
    return aux/10;
}

int n1,n2;


int bfs(int n,queue<ii> branch){
    if(n2==n) return 0;
    branch.push(ii(n+1,1));
    branch.push(ii(inv(n),1));
    while(!branch.empty()){
        ii l = branch.front();
        branch.pop();
        if(l.ff <= MAX and !visit[l.ff] ) {
            if(l.ff == n2) return l.ss;
            branch.push(ii(l.ff+1,l.ss+1));
            branch.push(ii(inv(l.ff),l.ss+1));
            visit[l.ff]=1;
        }
    }
    
    return -1;
}
int main(){
    int n;
    scanf("%d",&n);
    while(n--){
        scanf("%d %d",&n1,&n2);
        queue<ii> branch;
        memset(visit,0,sizeof(visit));
        printf("%d\n",bfs(n1,branch));
    }

    return 0;
}
