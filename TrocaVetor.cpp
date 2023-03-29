#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int tam=20;
    int x[tam],y[tam];
    int i=0,j=0;

    for(i=0;i<tam;i++){
        cin>>x[i]; 
    }

    i=0;
    for(j=tam-1;j>=0;j--){
        y[i]=x[j];
        i++;
    }

    for(i=0;i<tam;i++){
        cout<<"N["<<i<<"] = "<<y[i]<<endl;
    }

    return 0;
}