#include <cstdlib>
#include <cstdio>
#define tu(c) (c>95?c-32:c)
#define tl(c) (c>95?c:c+32)

int main(){
    char l;
    bool u=true;
    while(scanf("%c",&l)!=EOF){
        if(l==10){
            u=true;
        }else if(u && l!=32) {
            l=tu(l);
            u=false;
        }else if(l!=32){
            l=tl(l);
            u=true;
        }

        printf("%c",l);
    }

    return 0;
}
