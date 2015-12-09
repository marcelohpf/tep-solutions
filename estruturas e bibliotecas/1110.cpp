#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int cartaRemanescente(int numero){
    vector<int> cartas;
    for (int i=numero;i>0;i--)
        cartas.push_back(i);
 
    cout << "Discarded cards: ";
 
    int i;
 
    for( i =1; i<numero-1;i++){
        cout << cartas.back() <<", ";
        cartas.pop_back();
        cartas.insert(cartas.begin(),cartas.back());
        cartas.pop_back();
    }
    cout << cartas.back() <<endl;
    cartas.pop_back();
    return cartas.back();
}
int main(){
    ios_base::sync_with_stdio(false);
    int numero;
    do{
        cin >> numero;
        if(numero != 0){
            numero = cartaRemanescente(numero);
            cout << "Remaining card: " << numero<<endl;
        }
    }while(numero != 0);
}
