#include <iostream>
  
using namespace std;
  
int main() {
  
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     ios_base::sync_with_stdio(false);
    int c,p,g,r,b;
    char l1,l2;
    cin >> c;
    for(int i = 0; i<c; i++)
    {
        cin >> p;
        g=0;
        r=0;
        b=0;
        for(int j=0; j<p; j++)
        {
            cin >> l1 >> l2;
            switch(l1)
            {
                case 'G':
                    if(l2=='B')
                        g+=2;
                    else
                        g++;
                    break;
                case 'B':
                    if(l2== 'R')
                        b+=2;
                    else
                        b++;
                    break;
                case 'R':
                    if(l2 =='G')
                        r+=2;
                    else
                        r++;
            }
        }
        if( g == r && g == b)
            cout << "trempate\n";
        else if( (g==r && g>b) || (b==r && b>g) || (b==g && g>r)  )
            cout <<"empate\n";
        else{
                if(g>r && g>b)
                    cout << "green\n";
                else if(b>r && b>g)
                    cout <<"blue\n";
                else
                    cout <<"red\n";
 
        }
 
    }
  
    return 0;
}
