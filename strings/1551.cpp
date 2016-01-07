#include <cstdio>
#include <cstdlib>
#define MAX 28

int main(){
    int c;
    char a;
    scanf("%d",&c);
    scanf("%c",&a);
    while(c--){
        int n=0;
        int l[MAX]={0};
        while(scanf("%c",&a)!=EOF && a!=10){
            if( a!=32 && a!=44 && !l[a-97]) {n++; l[a-97] = 1;}
        }
        if (n==26) printf("frase completa");
        else if(n >=13) printf("frase quase completa");
        else printf("frase mal elaborada");
        printf("\n");
    }

    return 0;
}
