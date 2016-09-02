#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
 
int main(){
ios_base::sync_with_stdio(false);
    int N,M,np,al2;
    vector<int> P,aux;
    cin >> N;
    for(int caso = 1; caso<=N;caso++){
        cin >> M;
        P.clear();
        aux.clear();
        for(int al=0;al<M; al++){
            cin >> np;
            P.push_back(np);
            aux.push_back(np);
        }
        sort(P.begin(),P.end());
        np=0;
        al2=M-1;
        for(int al = 0; al<M;al++){
            if(P[al2--] == aux[al])
                np++;
        }
        cout << np<<"\n";
 
    }
return 0;
}
