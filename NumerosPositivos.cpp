#include <iostream>

using namespace std;

int main(){

    int valor=0;
    double n1,n2,n3,n4,n5,n6;
    cin>>n1>>n2>>n3>>n4>>n5>>n6;


    if(n1>0){
        valor++;
    }
    if(n2>0){
        valor++;
    }
    if(n3>0){
        valor++;
    }
    if(n4>0){
        valor++;
    }
    if(n5>0){
        valor++;
    }
    if(n6>0){
        valor++;
    }

    cout<<valor<<" valores positivos"<<endl;
    return 0;
}