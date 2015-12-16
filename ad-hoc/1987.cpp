#include <iostream>
#include <cstdio>
using namespace std;
 
int main(){
    int k;
    char num;
    while(cin >> k ){
        getchar();
        int soma=0;
        do{
            scanf("%c",&num);
            if (num!='\n' && num!= EOF)
                soma+=(num-48);
        }while(num!='\n' && num!= EOF);
        cout << soma << " "<<(soma%3==0? "sim":"nao")<<endl;
    }
 
}
