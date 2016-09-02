#include <iostream>
#include <algorithm>
#include <cstdio>
#include <string>
 
using namespace std;
 
void ott(string palavra){
    if (palavra.size()>3)
        printf("3");
    else if((palavra[0]=='o' && palavra[2]=='e') ||
             (palavra[0]=='o' && palavra[1]=='n') ||
             (palavra[1]=='n' && palavra[2]=='e'))
             printf("1");
    else printf("2");
    printf("\n");
}
int main(){
    int palavras;
    cin >> palavras;
    while(palavras--){
        string palavra;
        cin >> palavra;
        ott(palavra);
    }
 
    return 0;
}
