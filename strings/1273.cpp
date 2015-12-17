#include <iostream>
#include <algorithm>
#include <cstdio>
#include <string>
#define MAX 53
 
using namespace std;
 
void printalign(string palavra,int len,int limit){
    int i=0;
    while(i++ < limit-len){
        printf(" ");
    }
    cout << palavra <<endl;
 
}
int main(){
    int caso,pri=0;
    string palavra[MAX];
    int len[MAX];
    while(cin >> caso && caso != 0){
        if(pri) printf("\n");
        else pri=1;
        int bigger=0;
        for ( int i=0; i<caso; i++){
           cin >> palavra[i];
           len[i]=palavra[i].size();
           bigger = max(bigger,len[i]);
 
        }
        for (int i=0; i<caso; i++){
            printalign(palavra[i],len[i],bigger);
        }
    }
    return 0;
}
