#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Numero{
public:
    long int numero;
    int epar,resto;
 
    Numero(int numero,int n){
        this->numero = numero;
        this -> epar = numero %2;
        this -> resto = numero%n;
    }
    bool operator<(const Numero& other)const{
        if(this->resto == other.resto){
            if( this-> epar == 0 && other.epar !=0 ){
                return false;
            }else if(this->epar != 0 && other.epar == 0){
                return true;
            }else if( this->epar != 0 && other.epar != 0){
                return this->numero > other.numero;
            }else{
                return this->numero < other.numero;
            }
        }else{
            return this->resto < other.resto;
        }
    }
};
 
int main(){
ios_base::sync_with_stdio(false);
    int N,M;
    long int numero;
    vector<Numero> lr;
    cin >> N >> M;
 
    while ( !(M==N && M==0) ){
        lr.clear();
        for (int num =0; num <N; num++){
            cin >> numero;
            lr.push_back(Numero(numero,M));
        }
        sort(lr.begin(),lr.end());
        Numero aux = Numero(0,0);
        cout << N << " "<<M <<"\n";
        for (int num =0; num <N;num++){
            aux = lr[num];
            cout << aux.numero <<"\n";
        }
        cin >> N >> M;
    }
        cout << N <<" "<<M <<"\n";
 
return 0;
}
