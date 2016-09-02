#include <iostream>
#include <string>

using namespace std;

int mstr(string a,string b){
    int m=0;
    int as=a.size(),bs=b.size();
    for(int i=0;i<as;i++ ){
        int aux=i;
        int c=0;
        for(int j=0; j<bs; j++){
            if(a[aux]==b[j]){
                c++;
                aux++;
            }else{
                c=0;
                aux=i;
            }
            if(c>m){
                m=c;
            }
        }
    }
    return m;
}
int main(){
    string a;
    string b;
    while(getline(cin,a) && getline(cin,b)){
        cout << mstr(a,b) << endl;
    }
    return 0;
}
