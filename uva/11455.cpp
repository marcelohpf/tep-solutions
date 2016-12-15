#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> l = {0,0,0,0};
    int tc;
    scanf("%d",&tc);
    while(tc--){
        scanf("%d %d %d %d",&l[0],&l[1],&l[2],&l[3]);
        sort(l.begin(),l.end());
        if(l[0]==l[3]){
            printf("square\n");
        }else if(l[3]==l[2] && l[1] == l[0]){
            printf("rectangle\n");
        }else if(l[2]+l[1]+l[0] > l[3]){
        printf("quadrangle\n");
        }else{
            printf("banana\n");
        }
    }
    return 0;
}
