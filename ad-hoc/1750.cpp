#include <iostream>
#include <cmath>

#define min(x,y) (x>y?y:x)
#define MAX 25
using namespace std;
int main(){
    int c;
    cin >> c;
    int ca[MAX]={0};
    for(int i=0; i<c;i++){
        int k;
        cin >> k;
        ca[k+11]=(ca[k+11]+1)%2;
    }
    c=0;
    for(int i=0;i<MAX;i++){
        if(ca[i]){
            ca[c++]=i-11;
        }
    }
    
    int s1=0,s2=0;
    for(int i=0;i<c;i+=2){
        if(!i){
            s1+=min(abs(ca[c-1]-ca[i]),24-abs(ca[c-1]-ca[i]));
        }else{
            s1+=min(abs(ca[i-1]-ca[i]),24-abs(ca[i-1]-ca[i]));
        }
        s2+=min(abs(ca[i]-ca[i+1]),24-abs(ca[i]-ca[i+1]));
    }
    cout << min(s1, s2)<<endl;

    return 0;
}
