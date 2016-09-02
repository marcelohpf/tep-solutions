#include <iostream>
#include <cstdio>
 
using namespace std;
 
int main(){
    int c;
    cin >> c;
    getchar();
    while (c--){
        char d;
        int diamantes=0;
        int qtd=0;
        do{
            scanf("%c",&d);
            if ( d != '\n'){
                if(d == '<'){
                    diamantes++;
                }else if( d == '>'){
                    diamantes--;
                    if(diamantes >= 0)
                        qtd++;
                    else
                        diamantes=0;
                }
            }
        }while(d!='\n' && d!=EOF);
        cout << qtd <<endl;
    }
    return 0;
}
