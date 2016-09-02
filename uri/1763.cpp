#include <iostream>
 
using namespace std;
 
void saida(string pais){
    if(pais == "portugal" || pais == "brasil")
        cout <<"Feliz Natal!"<<endl;
    else if( pais == "alemanha")
            cout<<"Frohliche Weihnachten!"<<endl;
    else if(pais == "austria")
        cout<<"Frohe Weihnacht!"<<endl;
    else if(pais == "coreia")
        cout<<"Chuk Sung Tan!"<<endl;
    else if(pais == "argentina" || pais == "chile" ||pais == "mexico" || pais == "espanha")
                    cout<<"Feliz Navidad!"<<endl;
    else if(pais =="grecia")
                    cout<<"Kala Christougena!"<<endl;
    else if(pais == "canada"||pais == "estados-unidos" || pais == "inglaterra" ||pais == "australia"||pais == "antardida")
            cout<<"Merry Christmas!"<<endl;
   else if(pais =="suecia")
              cout<<"God Jul!"<<endl;
    else if(pais == "turquia")
        cout <<"Mutlu Noeller"<<endl;
    else if(pais =="irlanda")
    cout<<"Nollaig Shona Dhuit!"<<endl;
    else if(pais =="belgica")
        cout<<"Zalig Kerstfeest!"<<endl;
    else if(pais == "libia"||pais == "italia")
    cout<<"Buon Natale!"<<endl;
    else if(pais =="siria" || pais == "marrocos")
        cout<<"Milad Mubarak!"<<endl;
    else if(pais == "japao")
        cout<<"Merii Kurisumasu!"<<endl;
    else
        cout<<"--- NOT FOUND ---"<<endl;
}
int main(){
    string pais;
    while(cin >> pais)
        saida(pais);
return 0;
}
