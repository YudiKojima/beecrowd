#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int x=0;
    double n1=0,temp=0;

    for(;;){
        cin>>n1;
        if(n1>=0 && n1<=10){
            if(temp==0){
                temp=n1; 
            }else if(temp!=0){
            cout<<"media = "<<fixed<<setprecision(2)<<(n1+temp)/2<<endl;
            cout<<"novo calculo (1-sim 2-nao)"<<endl;
            cin>>x;
            if(x==1){
                temp=0;
                n1=0;
            } else if(x==2){
                break;
            } else{
                temp=0;
                n1=0;
                while(x!=1){
                    cout<<"novo calculo (1-sim 2-nao)"<<endl;
                    cin>>x;
                }
            }
            
            } 
        } else{
            cout<<"nota invalida"<<endl;
        }
    }
    
    return 0;
}