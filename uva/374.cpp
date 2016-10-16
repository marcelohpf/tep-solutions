#include <iostream>
#include <cstdio>
#define ll unsigned long long

using namespace std;
ll m;
ll power(ll b, ll p){
    if( p == 0) return 1;
    if( p&1 ){
        ll k = power(b,(p-1)/2)%m;
        return (((k*k)%m)*b)%m;
    }else{
        ll k = power(b,p/2)%m;
        return (k*k)%m;
    }
}
int main(){
    ll b,p;
    while(scanf("%llu %llu %llu",&b,&p,&m)==3){
        printf("%llu\n",power(b,p));
    }
    return 0;
}
