#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
 
using namespace std;
 
int main(){
    long long z, n;
    char e, num[128];
 
    while(scanf("%c%c%c%lld", &num[0], &num[1], &e, &z)!=EOF){
        if(num[0]=='0' && num[1]=='0' && z==0) break;
         
        long long i;
        for(i=2; i<z+2; i++){
            num[i]='0';
        }
        num[i]='\0';
 
        n=(long long)atoi(num);
 
        long long aux=floor(log10(n)/log10(2));
        long long aux2=pow(2, aux);
        long long res=2*(n-aux2)+1;
 
        cout << res << endl;
 
        getchar();
    }
 
    return 0;
}
