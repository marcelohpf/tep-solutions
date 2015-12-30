#include <iostream>
using namespace std;

int main(){
    int x = 0;
    int y = 0;
    int z;
    for(int i=0;i<5;i++){
        cin >> z;
        x = x<<1;
        x+=z;
    }
    for(int i=0;i<5;i++){
        cin >> z;
        y=y<<1;
        y+=z;
    }
    z= x^y;

    cout << (z==31?'Y':'N') <<endl;
}
