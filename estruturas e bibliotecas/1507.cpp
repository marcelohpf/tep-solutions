#include <iostream>
using namespace std;
bool processaSub(string S,string Q){
    char *b = &Q[0];
    for(char *a = &S[0];*a;a++){
        if(a[0] == b[0]){
            b++;
        }
        if(!*b)
            return true;
    }
    return false;
}
int main(){
ios_base::sync_with_stdio(false);
    string S;
    int a,b;
    string Q;
    cin >> a;
    for (int i =0;i<a;i++){
        cin >> S >>b;
        for(int i=0; i<b; i++){
            cin >> Q;
            bool sub=processaSub(S,Q);//Processa se é subsequencia
            cout << ((sub) ? "Yes":"No")<<endl;
        }
 
    }
 
 
 
 
return 0;
}
