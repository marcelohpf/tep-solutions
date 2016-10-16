#include <iostream>
#include <cstdio>
#include <vector>
#include <string>

#define MAX 10000
using namespace std;

int links[MAX];
int size[MAX];
int parent(int c1){
    if( c1 != links[c1] ) links[c1]=parent(links[c1]);
    return links[c1];
}
bool connected(int c1,int c2){
    return parent(c1) == parent(c2);
}
void connect(int c1,int c2){
    int p1=parent(c1),p2=parent(c2);
    if(p1==p2) return;
    if(size[p1]>size[p2]){
        links[p2]=p1;
    } else{
        links[p1] = p2;
        if(size[p1]==size[p2]) size[p2]++;

    }
}
int main(){
    int cases,m=0;
    scanf("%d\n",&cases);
    while(cases--){
        int n, c1,c2,co1=0,co2=0;
        scanf("\n%d\n",&n);
        for(int i=0;i<=n+1;i++){
            links[i]=i;
            size[i]=0;
        }
        char l;
        string inp;
        while(true){
            if(!getline(cin,inp) || inp.empty()) break;
            sscanf(inp.c_str(),"%c %d %d\n",&l,&c1,&c2);
            if( l == 'c'){ connect(c1,c2); }
            else if(connected(c1,c2)){
                co1++;
            }else{co2++;}
        }
        if(m++) printf("\n");
        printf("%d,%d\n",co1,co2);
    }
    return 0;
}
