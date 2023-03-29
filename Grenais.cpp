#include <iostream>
#include <string.h>

using namespace std;

int main(){

    int n,x,y,v_inter=0,v_gremio=0,empate=0;
    int grenais=1;
    string maior;

    for(;;){
        cin>>x>>y;
        if(x>y)
            v_inter++;
        else if(x<y)
            v_gremio++;
        else
            empate++;
        if(v_inter>v_gremio){
                maior="Inter venceu mais";
            }
            else if(v_inter<v_gremio){
                maior="Gremio venceu mais";
            }
            else{
                maior="Nao houve vencedor";
            }
        cout<<"Novo grenal (1-sim 2-nao)"<<endl;
        cin>>n;
        if(n==1){
            grenais++;
        }
        else if(n==2){
            cout<<grenais<<" grenais"<<endl;
            cout<<"Inter:"<<v_inter<<endl;
            cout<<"Gremio:"<<v_gremio<<endl;
            cout<<"Empates:"<<empate<<endl;
            cout<<maior<<endl;
            break;
            }
        else {
            cout<<"Novo grenal (1-sim 2-nao)"<<endl;
            cin>>n;
        }
    }

    return 0;
}