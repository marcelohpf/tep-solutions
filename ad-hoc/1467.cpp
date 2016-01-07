#include <iostream>
#include <string>
using namespace std;

int main(){
    int A,B,C;
    string cases="*CBAABC*";
    while(cin >> A >> B >> C){
        A=A<<2;
        B=B<<1;
        int r = A|B|C;
        cout << cases[r] << endl;
    }
    return 0;
}
