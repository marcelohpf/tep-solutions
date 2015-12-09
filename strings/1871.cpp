#include <iostream>
  
using namespace std;
  
int main() {
  
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
 ios_base::sync_with_stdio(false);
    int i,j,aux;
    long soma,multi;
    cin >> i >> j;
    while( !(i==j && j==0) ){
            soma = i+j;
            multi=1000000000;
            for(int k=0;k<10;k++)
            {
                aux = soma/multi;
                if(aux != 0){
                    cout << aux;
                }
                soma-=multi*aux;
                multi/=10;
            }
            cout<<"\n";
            cin >> i >> j;
    }
 
    return 0;
}
