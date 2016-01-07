#include <cstdio>
#include <cstdlib>
#define max(x,y) (x>y? x:y)
#define MAXL 105
#define MAXC 55

void printalign(char * palavra,int len,int limit)
{
    int i=0;
    while(i++ < limit-len){
        printf(" ");
    }
    printf("%s\n",palavra);
}
int main()
{
    int caso,pri=0;
    char palavra[MAXL][MAXC];
    char c;
    int len[MAXL];
    while(scanf("%d",&caso)!=EOF && caso != 0){
        scanf("%c",&c);
        if(pri) printf("\n");
        else pri=1;
        int bigger=0;
        for ( int i=0; i<caso; i++){
            int siz=0;
            //Build string without initial spaces and between words
            while(scanf("%c",&c)!=EOF && c!= 10){
                if(siz == 0 && c!=' ' ){
                    palavra[i][siz++]=c;
                }else if(siz!=0){
                    if(palavra[i][siz-1]!= ' '){
                        palavra[i][siz++]=c;
                    }else if(palavra[i][siz-1]== ' ' && c!=' '){
                        palavra[i][siz++]=c;
                    }
                }
            }
            //Remove final spaces
            while( siz>0 && palavra[i][siz-1]== ' ') siz--;
            palavra[i][siz]='\0';
            len[i]=siz;
            bigger = max(bigger,siz);
        }
        for (int i=0; i<caso; i++){
            printalign(palavra[i],len[i],bigger);
        }
    }

    return 0;
}
