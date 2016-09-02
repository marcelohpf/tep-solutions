#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
 
double somaF(vector<int> m, double chute){
    double soma = 0;
    for(auto c: m){
        if( chute <= c ){
            soma += c - chute;
        }else{
            break;
        }
    }
    return soma;
}
int main(){
    int N,A;
    while(cin >> N >> A && !( A == N && N == 0 )){
        vector<int> m;
        double maior =0, menor =0,soma=0;
        //entrada
        for (int caso =0; caso < N; caso++){
            int t;
            cin >> t;
            soma +=t;
//          cout << soma<<endl; 
            if (t > maior){
                maior = t;
            }
            m.push_back(t);
        }
        //process
        if ( abs(A-soma) <= 0.00001){
            cout << ":D" <<endl;
        }else if( A > soma ){
            cout << "-.-" <<endl;
        }else{
            double chute = maior/2;
            sort(m.begin(),m.end(),greater<int>());
            do{
                soma = somaF(m,chute);
                //cout << soma << " "<< chute << endl;
                if ( abs(A-soma) <= 0.00001 ){
                    cout.precision(4);
                    std::cout.setf( std::ios::fixed, std:: ios::floatfield );
                    cout<< chute <<endl;
                    break;      
                }else if( soma > A ){
                    menor = chute;                  
                }else{
                    maior = chute;
                }
                chute = (maior+menor)/2;    
            }while( abs(A-soma) >= 0.00001);
             
        }
         
    }
 
    return 0;
}
