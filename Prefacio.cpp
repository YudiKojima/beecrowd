#include <iostream>

using namespace std;

int main(){

    int a, b, teste;
    int m=0, r=0, q=1;

    cin>>a>>b;

    if(a>=-1000 && b>=-1000 && a<1000 && b<1000){
        if(a>0 && b>0){
            teste = a;
            teste = teste - 2;
            for(int i=1; m<teste; i++){
                m= b * i;
                r= a - m;
                q = i;
            }
            cout<<q<<" "<<r<<endl;
        }
        else if(a>0 && b<0){
            teste = a;
            teste = teste - 2;
            for(int i=-1; m<teste; i--){
                m= b * i;
                r= a - m;
                q = i;
            }
            cout<<q<<" "<<r<<endl;
        }
        else if(a<0 && b>0){
            teste = a;
            teste = teste + 2;
            for(int i=1; m>teste; i--){
                m= b * i;
                r= a - m;
                q = i;
            }
            cout<<q<<" "<<r<<endl;
        }
        else if(a<0 && b<0){
            teste = a;
            teste = teste + 2;
            for(int i=1; m>teste; i++){
                m= b * i;
                r= a - m;
                q = i;
            }
            cout<<q<<" "<<r<<endl;
        }
    }

    return 0;
}