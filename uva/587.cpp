#include <bits/stdc++.h>

#define COS4 0.7071067811865476

using namespace std;
using ii = pair<double,double>;

ii r[] {ii(0,1),ii(COS4,COS4),ii(1,0),ii(COS4,-COS4),ii(0,-1),ii(-COS4,-COS4),ii(-1,0),ii(-COS4,COS4)};

int pos(string name){
    if(name=="N")return 0;
    if(name=="NE")return 1;
    if(name=="E") return 2;
    if(name=="SE") return 3;
    if(name=="S") return 4;
    if(name=="SW")return 5;
    if(name=="W") return 6;
    if(name=="NW") return 7;
    return -1;
}

int main(){
    string line;
    int count=1;
    while(cin >> line, line!="END"){
        ii initial = ii(0,0); 
        int i=0,l=line.size();

        while(l>i){
            int k=0;
            while(line[i]>47 && line[i]<58){
                k+=(line[i++]-48);
                k*=10;
            }
            k/=10;
            string dir="";
            while(line[i]!=','&&line[i]!='.'){
                dir+=line[i++];
            }
            i++;
        initial.first = initial.first + k*r[pos(dir)].first;
        initial.second = initial.second + k*r[pos(dir)].second;
        }
        double v = hypot(initial.first,initial.second);
        printf("Map #%d\nThe treasure is located at (%.3lf,%.3lf).\nThe distance to the treasure is %.3lf.\n\n",count++,initial.first,initial.second,v);
    }
    return 0;
}
