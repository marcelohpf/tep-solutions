#include <iostream>
 
using namespace std;
char letras[]={'A','B','C','D','E'};
int main(){
    int caso;
    int resp;
    while (cin >> caso && caso != 0){
        while(caso--){
            int resposta=0;
            int times=0;
            for(int i=0;i<5;i++){
                cin >> resp;
                if(resp <=127){
                    resposta+=i;
                    times++;
                }
            }
            cout << (times == 1?letras[resposta]:'*') << endl;
 
        }
    }
    return 0;
}
