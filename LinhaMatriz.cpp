#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    double m[12][12];
    int l;
    char op[5];
    double soma=0;

    cin >> l;
    cin >> op[0];

    for(int i=0; i<12; i++){
        for(int j=0; j<12; j++){
            m[i][j]=i;
        }
    }

    for(int j=0; j<12; j++){
        soma += m[l][j];
    }

    switch (op[0]){
        case 'S':
            cout<<fixed<<setprecision(1)<<soma<<endl;;
            break;
        case 'M':
            cout<<fixed<<setprecision(1)<<soma/12<<endl;;
            break;
        default:
        break;
    }

    return 0;
}



/*
int main(){

    double m[12][12], soma, resposta;
    int linha;
    char operacao;

    while (linha < 0 || linha > 11){
        cin>>linha;
    }
    
    while(operacao != 'S' && operacao != 'M'){
        cin>>operacao;
    }
    
    for(int l=0; l<12; l++){
        for(int c=0; c<12; c++){
            cin>>m[l][c];
        }
    }

    for(int l=linha; l<=linha; l++){
        for(int c=0; c<12; c++){
            if(operacao == 'S'){
                resposta+=m[l][c];
            }
            else{
                soma+=m[l][c];
                resposta=soma/12;
            }
        }
    }

    cout<<fixed<<setprecision(1)<<resposta<<endl;

    return 0;
}
*/