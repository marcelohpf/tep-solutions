#include <iostream>
#include <cstring>
#define MAX 5
using namespace std;
int mapa[MAX][MAX];
bool cops;
 
bool solution(int i, int j){
    if (i == 4 && j == 4) return true;
    else return false;
}
 
bool backtracking(int mapa[MAX][MAX],int i,int j){
    if (!cops){
        if ( solution(i,j) ){
            cops = true;
        }else if ( i >=0 && i < MAX && j >= 0 && j < MAX &&
                  mapa[i][j] == 0 ){
            mapa[i][j] = 1;
            backtracking(mapa,i+1,j);
            backtracking(mapa,i-1,j);
            backtracking(mapa,i,j+1);
            backtracking(mapa,i,j-1);
        }
    }
    return cops;
}
int main(){
    int c;
    cin >> c;
    while(c--){
        cops = false;
        for ( int i=0;i<MAX;i++){
            for (int j=0; j<MAX; j++){
                cin >> mapa[i][j];
            }
        }
        if ( backtracking(mapa,0,0) ) cout << "COPS" <<endl;
        else cout << "ROBBERS" <<endl;
    }
    return 0;
}
