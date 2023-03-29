#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int valor=0;
    double n1,n2,n3,n4,n5,n6,media;
    cin>>n1>>n2>>n3>>n4>>n5>>n6;


    if(n1>0){
        valor++;
        media+=n1;
    }
    if(n2>0){
        valor++;
        media+=n2;
    }
    if(n3>0){
        valor++;
        media+=n3;
    }
    if(n4>0){
        valor++;
        media+=n4;
    }
    if(n5>0){
        valor++;
        media+=n5;
    }
    if(n6>0){
        valor++;
        media+=n6;
    }

    media=media/valor;
    cout<<valor<<" valores positivos"<<endl;
    cout<<fixed<<setprecision(1)<<media<<endl;
    return 0;
}