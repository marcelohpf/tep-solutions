#include <iostream>
#include <string>

#define uni unsigned int

using namespace std;

string pbin(uni i){
    if(i/2!=0) pbin(i/2);
    cout << (i&1);
    return "";
}
string phex(uni i){
    if(i/16!=0) phex(i/16);
    char k=(char)(i%16>9?  87+i%16:i%16+48);
    cout <<k ;
    return "";
}

void pint(string b,string k){
    uni n;
    if (k == "bin"){
        n=stoul (b,0,2);
        cout << n << " dec"<<endl;
        cout << phex(n) << " hex"<<endl;
    }else if(k=="hex"){
        n=stoul (b,0,16);
        cout << n << " dec"<<endl;
        cout<< pbin(n)<< " bin"<<endl;
    }else{
       n=stoul (b,0,10);
       cout << phex(n) << " hex" << endl;
       cout << pbin(n) << " bin"<< endl;
    }
}

int main(){
    int c;
    cin >> c;
    for (int caso =1; caso <=c; caso++){
        string n,b;
        cin >> n >> b;
        cout << "Case "<<caso<<":"<<endl;
        pint(n,b);
        cout << endl;
    }
    return 0;
}
