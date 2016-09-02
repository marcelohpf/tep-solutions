#include <iostream>

char letras[] = {'a','b','c','d','e','f','g','h','i',
                'j','k','l','m','n','o','p','q','r',
                's','t','u','v','w','x','y','z'};
using namespace std;
void rem(string p,string actual,int siz,int limit){
    if( siz >= limit)
        return;
    for(int i =0; i<26;i++){
        int k = p.find_first_of(letras[i]);
        if(k!=-1){
            cout << actual << letras[i] << endl;
            rem(p.substr(k+1,limit),actual+letras[i],siz+1,limit);
        }
    }

}

int main(){
    string p;
    while(cin >> p){
        rem(p,"",0,p.size());
        cout << endl;
    }

}
