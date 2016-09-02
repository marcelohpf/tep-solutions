#include <iostream>

using namespace std;

int mdc(int a,int b){
    int resto,i=a,j=b;
    do{
        resto = i%j;
        i=j;
        j=resto;
    }while(resto!=0);
    return i;
}
int main(){
    int caso;
    cin >> caso;
    while(caso--){
        int f1,f2;
        cin >> f1 >> f2;
        cout << mdc(f1,f2) << endl;
    }
    return 0;
}
