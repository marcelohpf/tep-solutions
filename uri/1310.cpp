#include <iostream>
#define MAX 55
using namespace std;

int mc(int * p,int d){
    int max=0,sum=0;
    for(int i=0;i< d; i++){
        sum+=p[i];
        if(sum<0) sum=0;
        if(sum>max) max=sum;
    }
    return max;
}

int main(){
    int d;
    while(cin>>d){
        int c;
        cin>>c;
        int p[MAX]={0};
        for(int i=0;i<d;i++){
            cin >> p[i];
            p[i]-=c;
        }
        cout << mc(p,d)<<endl;         
    }
    return 0;
}
