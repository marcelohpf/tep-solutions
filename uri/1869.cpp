#include <iostream>
  
using namespace std;
  
int main() {
  
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
 ios_base::sync_with_stdio(false);
    unsigned long long int numero,divisor;
    char numbase[20];
    char letra;
    int i=0;
    cin>> numero;
    if(numero ==0 )
        cout<<0<<'\n';
    while(numero !=0){
        i=0;
        do{
            divisor= numero %32;
            if( divisor<=9 && divisor>=0 ){
                letra= (char) divisor+'0';
                numbase[i++]=letra;
            }else{
                letra = (char) (divisor-10)+'A';
                numbase[i++]=letra;
            }
 
            numero/=32;
        }while( numero>0);
        for(int j=i-1;j>=0;j--)
            cout<<numbase[j];
        cout << "\n";
        cin >> numero;
        if(numero ==0)
            cout<<0<<'\n';
    }
    return 0;
}
