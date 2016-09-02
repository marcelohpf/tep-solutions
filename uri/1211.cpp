#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
int conta(string cima, string baixo){
    int i=0;
    while(cima[i]==baixo[i] && cima[i]!='\0'){
        i++;
    }
    return i;
}
 
int main(){
    char novonum[201]="0";
    vector<string> numeros;
    int N;
 
    while( cin >> N){
        int j=0;
        numeros.clear();
        for(int i=0 ; i<N; i++){
            cin >> novonum;
            numeros.push_back(novonum);
        }
        sort(numeros.begin(),numeros.end());
        for( int i = 1; i<N; i++){
            j+=conta(numeros[i-1],numeros[i]);
        }
        cout << j <<endl;
    }
    return 0;
}
