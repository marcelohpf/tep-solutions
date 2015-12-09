#include <iostream>
#include <vector>
#include <cstdlib>
 
using namespace std;
 
int main(){
    long long n, num;
 
    while(cin >> n && n){
        long long atual=0;
        long long res=0;
        while(n--){
            cin >> num;
            atual+=num;
            res+=abs(atual);
        }
 
        cout << res << endl;
    }
 
    return 0;
}
