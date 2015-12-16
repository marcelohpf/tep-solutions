#include <iostream>
 
using namespace std;
 
 
int main(){
    string palavra;
    long long fat[16];
    fat[1]=1;
    for (int i =2;i<16;i++)
        fat[i]=fat[i-1]*i;
 
    while (cin >> palavra && palavra!="0"){
        cout << fat[palavra.size()]<<endl;
    }
}
