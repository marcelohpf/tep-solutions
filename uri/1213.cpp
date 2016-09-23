#include <iostream>
#include <cstdio>

using namespace std;

int ones(int n){
    int l=1;
    for(int cont=1; cont%n != 0; cont=(cont*10+1)%n){l++;}
    return l;
}
int main(){
    int n;
    while(scanf("%d",&n)==1){
        printf("%d\n",ones(n));
    }
    return 0;
}
