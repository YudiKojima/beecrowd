#include <iostream>

using namespace std;

int main(){

    int tam=10,x[tam];

    for(int i=0;i<tam;i++){
        cin>>x[i];
        if(x[i]<=0){
            x[i]=1;
        }
        cout<<"X["<<i<<"] = "<<x[i]<<endl;
    }

    return 0;
}