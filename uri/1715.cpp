#include <iostream>

using namespace std;

int main(){
    int N,M;
    cin >> N >> M;
    int gol=0;
    while(N--){
        int k,l=1;
        for(int i=0;i<M;i++){
            cin >> k;
            if(!k) l=k;
        }
        if(l) gol++;
    }
    cout << gol << endl;
    return 0;
}
