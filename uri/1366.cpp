#include <iostream>
 
using namespace std;
 
int main(){
    int caso;
    while(cin >> caso && caso!=0){
        int siz,qtd,qtdp=0;
        while(caso--){
            cin >> siz >> qtd;
            qtdp+=(qtd/2);
        }
        cout << qtdp/2 << endl;
    }
    return 0;
}
