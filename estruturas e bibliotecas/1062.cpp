#include <iostream>
#include <vector>
 
using namespace std;
#define TAM 1001
 
bool posOrdena(vector<int> v,int tam){
    int pilha[TAM];
    fill(pilha,(pilha+tam),-1);
    int  saida=tam;
    int vi=tam-1,pilhai=0;
    while(saida!=0){
        if(v[vi] != saida && vi >=0){
            if(pilha[pilhai]!=saida){
                pilha[++pilhai]=v[vi--];
            }else{
                saida--;
                pilha[pilhai--]=-1;
            }
        }else if(v[vi] == saida && vi >=0){
            saida--;
            vi--;
        }else if( pilha[pilhai] != saida ){
            return false;
        }else{
            pilha[pilhai--]=-1;
            saida--;
        }
    }
    return true;
}
int main(){
ios_base::sync_with_stdio(false);
    int N,aux,i;
    vector<int> V;
    V.resize(1001);
    cin >> N;
    while(N!=0){
        aux=1;
        do{
            V.clear();
            i=0;
            while(i++<N && aux!=0){
                cin >>aux;
                V.push_back(aux);
            }
        //processa
       if(aux != 0){
            cout << (posOrdena(V,N)? "Yes":"No");
       }
        cout <<"\n";
        }while(aux!=0);
        cin >> N;
    }
 
 
return 0;
}
