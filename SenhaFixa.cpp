#include <iostream>
#include <string.h>

using namespace std; 

int main(){

    string senha;

    for(;;){
        cin>>senha;
        if(senha=="2002"){
            cout<<"Acesso Permitido"<<endl;
            break;
        } else if(senha!="2002"){
            cout<<"Senha Invalida"<<endl;
        }
    }
        

    return 0;
}