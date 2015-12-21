#include <iostream>

#include <map>

using namespace std;
map<string,bool> letters;
void rem(string p,int siz){
    if(!letters[p] && p!=""){
        string aux;
        letters[p]=true;
        for(int i=0; i<siz; i++){
            aux = p;
            rem(aux.erase(i,1),siz-1);
        }
    }
}

int main(){
    string p ;
    while(cin >> p){
        letters.clear();
        rem(p,p.size());
        for (auto c = ++letters.begin(); c!= letters.end(); c++){
            cout << c->first <<endl;
        }
        cout << endl;
    }
}
