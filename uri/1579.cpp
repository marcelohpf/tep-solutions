#include <iostream>
 
using namespace std;
 
int kg[110];
 
bool camValid(int meio,int caminhoes,int pns){
  int numcamin = 0, peso = 0;
 
  for(int i = 0; i < pns; ++i){
    if(peso + kg[i] <= meio){
      peso += kg[i];
    }else{
      peso = kg[i];
      numcamin++;
    }
  }
 
  return numcamin < caminhoes;
}
 
int main(){
  int N, frete, fim, comeco, meio;
 
  cin >> N;
 
  for (int cont=0; cont<N;cont++){
    int pns,camin;
    cin >> pns >> camin >> frete;
    comeco = fim = 0;
    for(int i = 0; i < pns; ++i){
        int peso;
      cin >> peso;
      kg[i] = peso;
      if(kg[i] > comeco) {
        comeco = kg[i];
      }
      fim += kg[i];
    }
 
    while(comeco < fim){
      meio = (comeco+fim)/2;
 
      if(camValid(meio,camin,pns)){
        fim = meio;
      }else{
        comeco = ++meio;
      }
    }
 
    cout << comeco << " $" << comeco*camin*frete << endl;
  }
 
  return 0;
}
