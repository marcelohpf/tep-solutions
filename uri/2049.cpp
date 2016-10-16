#include <iostream>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    string key,text;
    int caso=1;
    while( cin >> key, key[0]!='0'){
        if(caso>1) cout << endl;
        cin >> text;
        size_t f = text.find(key);
        cout << "Instancia "<<caso++<<endl;
        if(f == string::npos ) cout << "falsa" << endl;
        else cout << "verdadeira" << endl;
    }
    return 0;
}

