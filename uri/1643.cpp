#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main(){
    int t, n, indice;
    vector <int> fib(30);
    vector <int>::iterator it;
 
    fib[1]=1;
    fib[2]=2;
    for(int i=3; i<=24; i++){
        fib[i]=fib[i-1]+fib[i-2];
    }
     
    cin >> t;
 
    while(t--){
        cin >> n;
        it=lower_bound(fib.begin(), fib.end(), n);
        indice=it-fib.begin();
 
        if(fib[indice]>n)
            indice--;
 
        int soma=fib[indice], res=fib[indice-1];
        for(int i=indice+1; i>=1; i--){
            if((soma+fib[i])<=n){
                if(i>1)  
                    res+=fib[i-1];
                soma+=fib[i];
            }
 
            if(soma==n) break;
        }
 
        cout << res << endl;
    }
 
    return 0;
}
