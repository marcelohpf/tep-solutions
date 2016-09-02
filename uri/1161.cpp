#include <iostream>
#define ll unsigned long long
#define MAX 21
using namespace std;
ll dp[MAX];
 
int main(){
    int M,N;
    dp[0]=1;
    for (int i=1; i<MAX ; i++){
         dp[i]=dp[i-1]*i;
    }
    while (cin >> M >> N){
        cout << dp[M]+dp[N]<<endl;
    }
 
    return 0;
}
