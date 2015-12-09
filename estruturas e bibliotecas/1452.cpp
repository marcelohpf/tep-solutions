#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
 
#define MAX 210
using namespace std;
 
int main(){
    int N, M;
    while(cin >> N >> M && (N != 0 || M != 0)){
        vector< string > servidor[MAX];
        for( int ser =0; ser<N; ser ++){
            int Q;
            cin >> Q;
            for ( int apli =0; apli< Q; apli++){
                string aplicacao;
                cin >> aplicacao;
                servidor[ser].push_back(aplicacao);
                //cout << aplicacao <<endl;
            }
            sort(servidor[ser].begin(), servidor[ser].end());
        }
        int total =0;
        for ( int cli =0; cli < M ; cli ++){
            int P;
            cin >> P;
            map< string, int> requisicao;
            map < int , int> serv;
            for (int apl =0; apl <P; apl++){
                string aplicacao;
                cin >> aplicacao;
                if( !requisicao[aplicacao] ){
                    requisicao[aplicacao] = 1;
                     
                    for ( int i =0; i< N; i++){
                        if ( !serv[i] && binary_search(servidor[i].begin(),servidor[i].end(),aplicacao)  ){
                            //cout << "servidor "<< i <<"aplicação: "<<aplicacao<<endl;
                            serv[i]=1;
                            total++;
                        }
                    }
                }
            }
         
        }
        cout << total << endl;
         
    }
    return 0;
}
