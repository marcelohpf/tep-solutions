#include <bits/stdc++.h>
#define MAX 40
using namespace std;
int l[MAX];
int mapa[MAX];
map <int,int> a;
int lis(int siz){

    int li[MAX];
    for(int i=1;i<=siz;i++) li[i]=1;
    for(int i=1; i<=siz; i++){
        for(int j=1; j<i; j++){
            if(mapa[l[i]]>mapa[l[j]] && li[i]<li[j]+1){
                li[i]=li[j]+1;
            }
        }
   }
   int ma= -1;
   for(int i=1;i<=siz;i++){
       ma=max(ma,li[i]);
   }
   return ma;
}

int main(){
    
    int n;
    scanf("%d",&n);
    mapa[0]=-1;
    for(int i=1;i<=n;i++){
        int k;
        scanf("%d",&k);
        mapa[i]=k;

    }

    int c=1,k;
    while(scanf("%d",&k)==1){
        l[k]=c++;
        if(c==n+1){
            printf("%d\n",lis(n));
            c=1;
        }
        
    }
}
