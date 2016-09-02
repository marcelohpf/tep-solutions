#include <iostream>
#define lo unsigned long long
using namespace std;
lo mmc(lo a,lo b){
    lo resto,i=a,j=b;
    do{
        resto = i%j;
        i=j;
        j=resto;
    }while(resto!=0);
    return (a*b)/i;
}
int main()
{
    lo tam,a,b;
    while( cin >> tam >> a >> b &&
          !(a==0 && b==0 && tam==0) ){
              cout << tam/a+tam/b-tam/mmc(a,b) <<endl;
          }
    return 0;
}
