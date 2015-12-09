#include <iostream>
  
using namespace std;
 int verificaParenteses(string expressao){
    int par = 0;
    for(char * p = &expressao[0]; *p; p++){
        if(p[0] == ')'){
            if(par <= 0)
                return -1;
            else
                par--;
        }else if(p[0] == '('){
            par ++;
        }
    }
    return par;
}
int main() {
  
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     ios_base::sync_with_stdio(false);
    string expressao;
    int par;
    while(getline(cin,expressao)){
        par = verificaParenteses(expressao);
        //cout << expressao;
        if(par ==0)
            cout << "correct\n";
        else
            cout << "incorrect\n";
    }
  
    return 0;
}
