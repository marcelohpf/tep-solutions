#include <iostream>

#define ull unsigned long long
using namespace std;

int main(){
    int N,M;
    while( (cin >> N >> M) && !(N == -1 && M == -1)){
        ull ac=0,v=0;
        for(int i=0; i<N;i++){
            int ep; 
            cin >> ep;
            ac+=ep*M;
            v+=ac;
        }
        cout << v << endl;
    }
    return 0;

}
