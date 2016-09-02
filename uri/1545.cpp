#include <iostream>
#include <cstdlib>
#include <cstdio>
#define MAX 10010
#define lo long long
using namespace std;

int a[MAX];
lo *dp = (lo *) malloc(sizeof(lo)*MAX);
lo *p = (lo *) malloc(sizeof(lo)*MAX);

int myswap(lo ** a, lo ** b){
    lo * buffer;
    buffer = *b;
    *b = *a;
    *a = buffer;
}

int main(){

    int caso;
    while(cin>>caso){
        for (int i=0; i<caso; i++){
            cin>>a[i];
        }
        for(int i=1;i<caso;i++)
            dp[i-1]=max(a[i],a[i-1]);

        int S=2;
        int L = caso-1;
        while(S < caso){
            S+=2;
            myswap(&dp,&p);
            L-=2;
            for (int i=0; i<L;i++){
                dp[i]= max(a[i] + max( p[i+1], p[i+2]), a[S+i-1]+ max( p[i], p[i+1] )); 
            }
        }
        cout << dp[0]<< endl;
    }
    
    return 0;
}
