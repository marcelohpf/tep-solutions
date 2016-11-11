#include <bits/stdc++.h>

double PI = 2*acos(0);
using namespace std;
int main(){
    string p;
    int tc;
    scanf("%d\n",&tc);
    while(tc--){
        getline(cin,p);
        int r1,r2;
        if(sscanf(p.c_str(),"%d %d",&r1,&r2)==2){
            printf("%.4lf\n",2.0*PI*r1*r2);
        }else{
            double t = r1*1.0;
            printf("%.4lf\n",(PI*t*t/8 ));
        }
    }
    return 0;
}

