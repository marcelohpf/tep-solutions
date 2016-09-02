#include <cstdio>
#include <cstdlib>
#define uni unsigned int

int main(){
    int c;
    char l;
    scanf("%d",&c);
    while(c--){
            uni h=0;
            int t;
            scanf("%d",&t);
            scanf("%c",&l);
            for (int i=0;i<t;i++){
                int p=0;
                while(scanf("%c",&l)!=EOF && l!=10){
                    h+=(l-65+p+i);
                    p++;
                }
            }
            printf("%u\n",h);
    }


    return 0;
}
