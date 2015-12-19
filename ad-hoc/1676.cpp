#include <iostream>
#define MAX 35000
using namespace std;

int main(){
    int a[MAX]={0};
    int b[MAX]={0};
    int k=0;
    int l=0;
    for (int i =2; i<MAX; i++){
        
        if (a[i]!=-1){
            b[l++]=i;
            k=0;
            for (int j=i+1; j<MAX; j++){
                if ( a[j]!=-1) {
                    k++;
                    if (k%i==0)
                        a[j]=-1;
                }
            }
        }
    }
    int c;
    while (cin >> c && c!=0){
        cout << b[c-1]<<endl;
    }
    return 0;
}
