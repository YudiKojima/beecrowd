#include <iostream>

using namespace std;

int main(){

    int pa,pb,t,ano=0;
    double g1,g2;

    cin>>t;
    if(t>=1 && t<=3000){
        for(int i=0;i<t;i++){
            cin>>pa>>pb>>g1>>g2;
            if((pa>=100 && pb<=1000000) && (g1>=0.1 && g2<=g1 && g2<=10.0)){
                ano=0;
                while(pa<pb && ano<101){
                    pa+=(pa*g1)/100;
                    pb+=(pb*g2)/100;
                    ano++;
                }
                if(ano<=100){
                    cout<<ano<<" anos."<<endl;
                }
                else{
                    cout<<"Mais de 1 seculo."<<endl;
                }
            }
            else{
                cout<<"Mais de 1 seculo."<<endl;
            }
        }
    }
    return 0;
}