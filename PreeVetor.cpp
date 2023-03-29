#include <iostream>

using namespace std;

int main(){

    int v,tam=10,x[tam];

    cin>>v;
    if(v<=50){
        cout<<"X[0] = "<<v<<endl;
        for(int i=1;i<tam;i++){
            v+=v;
            cout<<"X["<<i<<"] = "<<v<<endl;
        }
    }

    return 0;
}