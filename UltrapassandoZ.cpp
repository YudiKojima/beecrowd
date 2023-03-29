#include <iostream>

using namespace std;

int main(){

    int x,z,soma=0,total=0;
    cin>>x>>z;

    for(;;){
        if(z>x){
            for(int i=0; soma<z; i++){
                soma=soma+x;
                x=x+1;
                total++;
            }
            cout<<total<<endl;
            break;
        }
        else if(z<=x){
            cin>>z;
        }
    }

    return 0;
}