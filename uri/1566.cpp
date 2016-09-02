#include <cstdio>
#include <algorithm>
#define MAX 231
using namespace std;
 
int main(){
 
        int NC,N,alturas[MAX],aux,maior=0;
        scanf("%d",&NC);
        for(int caso = 1;caso <= NC;caso++)
        {
            scanf("%d", &N);
            fill(alturas,alturas+MAX,0);
            maior=0;
            for(int i =0;i<N;i++)
            {
                scanf("%d",&aux);
                alturas[aux]++;
                if(aux>maior)
                    maior=aux;
            }
            for(int i=20;i<MAX;i++)
            {
                if(alturas[i]!=0){
                    for(int j=0; j<alturas[i];j++)
                    {
                        printf("%d",i);
                        if(i<maior || j<alturas[i]-1)
                            printf(" ");
                    }
                }
 
 
            }
            printf("\n");
        }
return 0;
}
