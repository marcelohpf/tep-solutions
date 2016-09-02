#include <iostream>
#include <cstring>
#include <vector>
#define MAX 100005
 
using namespace std;
 
int v[MAX];
 
int read(int pos){
    int sum=0;
    while(pos>0){
        sum+=v[pos];
        //cout << v[pos] << "bef "<< endl;
        pos -= (pos & -pos);
    }
//  cout << pos <<endl;
    return sum;
}
void update(int idx ,int val,int N){
    while (idx <= N){
        v[idx] += val;
        //cout << v[idx] << " "<<idx<<endl;
        idx += (idx & -idx);
    }
}
 
int main(){
    int N;
        vector <int> pessoas;
    pessoas.push_back(0);
    cin >> N;
    int t = 0;
    memset(v,0,MAX);
    for (int bg =1; bg <= N; bg++){
        int np = 0;
        cin >> np;
        pessoas.push_back(np);
        update(bg,np,N);
    }
    char op;
    int number;
    while( cin >> op >> number ){
        if ( op =='?' ){
                cout << read(number)-pessoas[number]<<endl;
        }else{
                update(number,-pessoas[number],N);
            }
    }
    return 0;
}
