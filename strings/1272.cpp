#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
 
 
int main(){
    int caso;
    cin >> caso;
    getchar();
    string palavra;
    while(caso--){
        getline(cin,palavra);
        string mount;
        int i=0;
        while (palavra[i]!='\0'){
            if(i==0 && palavra[i]!= ' '){
                cout << palavra[i];
            }else if(palavra[i]!= ' ' && palavra[i-1]==' '){
                cout << palavra[i];
            }
            i++;
        }
        cout <<endl;
    }
    return 0;
}
