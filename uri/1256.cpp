#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main(){
    vector<int> nome[101];
    int numero;
    cin >> numero;
    for(int i = 0; i<numero; i++){
        if(i)
            cout << endl;
        int posicao,valor;
        cin >> posicao >> valor;
        for (int j =0; j<valor; j++){
            int numero;
            cin >> numero;
            nome[numero%posicao].push_back(numero);
        }
        for (int j =0; j<posicao; j++){
            reverse(nome[j].begin(),nome[j].end());
            cout << j << " -> ";
            while(!nome[j].empty()){
                cout << nome[j].back()<<" -> ";
                nome[j].pop_back();
            }
            cout << "\\" << endl;
        }
    }
}
