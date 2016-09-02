#include <iostream>
#include <set>
#include <cctype>
#include <cstdio>
using namespace std;

int main(){
    set<string> k;
    string p="";
    char c;
    while(scanf("%c",&c)!= EOF){
        if(isalpha(c))
            p.push_back(tolower(c));
        else if (p!=""){
            k.insert(p);
            p = "";
        }
    }
    int l=0;
    for(auto c = k.begin();c!= k.end()&& l<5000; c++, l++){
        cout << *c <<endl;
    }


    return 0;
}
