#include <iostream>
#include <cstdio>
#include <cmath>
#define dist sqrt( (R1-L+R2)*(R1-L+R2) + (R1-C+R2)*(R1-C+R2) )
using namespace std;
int main(){
    int L,C,R1,R2;
    while (scanf("%d %d %d %d",&L,&C,&R1,&R2),L|C|R1|R2){
        if ( L < (R1*2) || L < (R2*2) ) printf("N\n");
        else if (C < R1*2 || C < R2*2 ) printf("N\n");
        else if ( dist < R1+R2 ) printf("N\n");
        else printf( "S\n");
    }
    return 0;
}
