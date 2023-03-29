#include <iostream>

using namespace std;

int main()
{
    int i;
    int tam=1000, x[tam];
    int menor = 0, maior = 0;
    int imenor = 0;

    cin >> tam;
    if(tam>1 && tam<1000){
        
        for (i = 0; i < tam; i++)
        {
            cin >> x[i];
        }
        for (int i = 0; i < tam; i++)
        {   
            if(i==0){
                maior = x[i];
                menor = x[i];
            }
            else if (x[i] > maior)
            {
                maior = x[i];
            }
            else if (x[i] < menor)
            {
                menor = x[i];
                imenor = i;
            }
        }
        cout << "Menor valor: " << menor << endl;
        cout << "Posicao: " << imenor << endl;
    }
    return 0;
}