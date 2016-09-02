#include <iostream>
#include <cstring>
 
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    string linha;
    string texto="";
 
    int inicio=0,fim=0;;
    char flag=']';
    while(getline(cin,linha)){
        texto="";
        flag = ']';
        for(char *p = &linha[0] ; *p; p++){
            if(p[0]=='['){
                flag = '[';
                inicio = 0;
            }else if(p[0]==']'){
                flag = ']';
            }
            else{
                if(flag == '[')
                    texto.insert(inicio++,1u,p[0]);
                else
                    texto.append(1u,p[0]);
            }
        }
        cout<<texto<<endl;
    }
return 0;
}
