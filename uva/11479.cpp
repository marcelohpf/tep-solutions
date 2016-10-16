#include <iostream>
#include <cmath>
#include <cstdio>
#include <string>

#define EPS 1e-6
#define ll long long
bool equal(double a, double b){
    return fabs(a-b) < EPS;
}
using namespace std;

string classify(ll a,ll b,ll c){

    if(a+b <= c || b+c <= a || a+c <= b) return "Invalid";
    if( a==b && b==c) return "Equilateral";
    if(a == b || b == c || a == c) return "Isosceles";
    return "Scalene";
    
}
int main(){
    int cases;
    scanf("%d",&cases);
    for(int i=1;i<=cases;i++){
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        printf("Case %d: %s\n",i,classify(a,b,c).c_str());
    }
    return 0;
}
