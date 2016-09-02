#include <iostream>
  
using namespace std;
  
int main() {
  
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
        ios_base::sync_with_stdio(false);
    string aa,bb,c="";
    int i=0,j=0;
    cin >> aa >> bb;
    int aux,hasNumber,auxstring;
    char d;
    int tostring,v,value;
    while(!(bb==aa && aa=="0"))
    {
        i = aa.size();
        if(i==1)
            aux = aa[0]-'0';
        else
        {
            while(i>1)
            {
                aux=0;
                for(int k=0; k < i; k++)
                    aux+=aa[k]-'0';
 
                aa="";
                hasNumber=0;
                tostring=100;
                value=aux;
                for (int j=0; j<3; j++)
                {
                    v=value/tostring;
                    if(v!=0 || hasNumber)
                    {
                        d = (char) '0'+v;
                        aa.append(1u,d);
                        hasNumber=1;
                    }
                    value-=v*tostring;
                    tostring/=10;
                }
 
                i = aa.size();
            }
        }
        i=aux;
        j = bb.size();
        if(j==1)
            aux = bb[0]-'0';
        else
        {
            while(j>1)
            {
                aux=0;
                for(int k=0; k < j; k++)
                    aux+=bb[k]-'0';
 
                bb="";
                hasNumber=0;
                tostring=100;
                value=aux;
                for (int j=0; j<3; j++)
                {
                    v=value/tostring;
                    if(v!=0 || hasNumber)
                    {
                        d = (char) '0'+v;
                        bb.append(1u,d);
                        hasNumber=1;
                    }
                    value-=v*tostring;
                    tostring/=10;
                }
 
                j = bb.size();
            }
        }
        j=aux;
 
        if(i>j)
          cout << 1 <<"\n";
        else if(i<j)
          cout << 2 << "\n";
        else
          cout << 0 <<"\n";
        cin >> aa >> bb;
    }
 
  
    return 0;
}
