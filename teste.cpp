#include <iostream>

using namespace std;

int main(){

    int tam=1000, n=0,p=0;
    int x[tam];

    for(int i=1;i<tam;i++){
        cin>>x[i];
        p++;
        if(x[i]<1){
            break;
        }
    }

    tam=p;

    for(int i=1; i<tam; i++){
        n=x[i];
        for(int i=1; i<=n; i++){
            if(i<n){
            cout<<i<<" ";
            }
            else if(i==n){
                cout<<i<<endl;
            }
        }
    }
    return 0;
}