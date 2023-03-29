#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    double renda,renda2,renda3,renda4;
    cin>>renda;

    if(renda<=2000.00){
        cout<<"Isento"<<endl;
    }
    else if(renda<=3000.00){
        renda=renda-2000.00;
        renda2=renda*0.08;
        cout<<"R$ "<<fixed<<setprecision(2)<<renda2<<endl;
    }
    else if(renda<=4500.00){
        renda=renda-3000.00;
        renda2=1000.00*0.08;
        renda3=renda*0.18;
        cout<<"R$ "<<fixed<<setprecision(2)<<renda2+renda3<<endl;
    }
    else if(renda>4500.00){
        renda=renda-4500.00;
        renda2=1000.00*0.08;
        renda3=1500.00*0.18;
        renda4=renda*0.28;
        cout<<"R$ "<<fixed<<setprecision(2)<<renda2+renda3+renda4<<endl;
    }

    return 0;
}