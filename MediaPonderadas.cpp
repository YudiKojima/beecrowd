#include <iostream>
#include <stdio.h>
#include <iomanip>

using namespace std;

int main(){

    int n,quantia,rato=0,sapo=0,coelho=0,total_cobaia;
    char c;

    cin>>n;

    if(n>0){
        for(int i=0;i<n;i++){
            cin>>quantia>>c;
            if((1<=quantia) && (quantia<=15)){
                if(c=='C'|| c=='c'){
                    coelho+=quantia;
                }
                else if(c=='R' || c=='r'){
                    rato+=quantia;
                }
                else if(c=='S' || c=='s'){
                    sapo+=quantia;
                }
            }
        }
    }
    total_cobaia=coelho+rato+sapo;

    cout<<"Total: "<<total_cobaia<<" cobaias"<<endl;
    cout<<"Total de coelhos: "<<coelho<<endl;
    cout<<"Total de ratos: "<<rato<<endl;
    cout<<"Total de sapos: "<<sapo<<endl;
    cout<<"Percentual de coelhos: "<<fixed<<setprecision(2)<<((coelho*100.00)/total_cobaia)<<" %"<<endl;
    cout<<"Percentual de ratos: "<<fixed<<setprecision(2)<<((rato*100.00)/total_cobaia)<<" %"<<endl;
    cout<<"Percentual de sapos: "<<fixed<<setprecision(2)<<((sapo*100.00)/total_cobaia)<<" %"<<endl;

    return 0;
}