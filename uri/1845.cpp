#include <iostream>
  
using namespace std;
  
int main() {
  
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
       ios_base::sync_with_stdio(false);
    int tam;
    string entrada, saida="";
    while(getline(cin, entrada))
    {
        for(int i=0; i<entrada.size(); i++)
        {
            tam=saida.size();
            if(entrada[i] == 'f' || entrada[i] == 'j' || entrada[i] == 'p' ||entrada[i] == 's' ||entrada[i] == 'v' ||entrada[i] == 'b' ||entrada[i] == 'x' ||entrada[i] == 'z')
            {
                if(tam>0)
                {
                    if(saida[tam-1] != 'f' && saida[tam-1] != 'F')
                        saida.append("f");
 
                }
                else
                    saida.append("f");
 
            }
            else if(entrada[i]== 'F' ||entrada[i] == 'J' || entrada[i] == 'P' ||entrada[i] == 'S' ||entrada[i] == 'V' ||entrada[i] == 'B' ||entrada[i] == 'X' ||entrada[i] == 'Z')
            {
                if(tam>0)
                {
                    if(saida[tam-1] != 'f' && saida[tam-1] != 'F')
                        saida.append("F");
                }
                else
                    saida.append("F");
            }
            else
            {
                saida.append(1u,entrada[i]);
            }
 
        }
        saida.append("\n");
    }
    cout << saida;
    return 0;
}
