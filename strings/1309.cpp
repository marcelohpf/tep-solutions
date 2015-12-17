#include <iostream>
#include <algorithm>
#include <cstdio>
#include <string>
using namespace std;
 
void str_currency(string value,string cents){
    printf("$");
    int len = value.size();
    int st=0;
    if(len%3 == 1){
        cout << value[st++];
    }else if(len%3==2){
        cout << value[st++];
        cout << value[st++];
    }else{
        cout << value[st++];
        cout << value[st++];
        cout << value[st++];
    }
 
    for (int i=st; i<len ;i++){
        if ( (i-st)%3==0 ){
            cout <<",";
        }
        cout << value[i];
 
    }
    cents = cents.size() < 2 ? "0"+cents:cents;
    cout <<"."<<cents<<endl;
}
int main(){
    string money,cent;
    while(cin >> money >> cent)
        str_currency(money,cent);
    return 0;
}
