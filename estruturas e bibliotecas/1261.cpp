#include <iostream>
#include <map>
using namespace std;
 
int main(){
ios_base::sync_with_stdio(false);
    map<string, int> cargo;
    int a,b,c;
    string palavra;
    cin >> a >>b;
    for (int i =0;i<a;i++){
        cin >> palavra >> c;
        cargo[palavra] = c;
    }
    for(int i=0; i<b; i++){
        c=0;
        do{
            cin >> palavra;
            if(cargo.find(palavra) != cargo.end())
                c+=cargo[palavra];
        }while(palavra!=".");
        cout <<c<<endl;
    }
 
return 0;
}
