#include <iostream>

using namespace std;

int main(){

    string temp;
    int d1,d2,h1,h2,m1,m2,s1,s2,dia_total,hora_total,minuto_total,segundo_total;
    cin>>temp>>d1;
    cin>>h1>>temp>>m1>>temp>>s1;
    cin>>temp>>d2;
    cin>>h2>>temp>>m2>>temp>>s2;
    
    dia_total=d2-d1;
    hora_total=h2-h1;
    minuto_total=m2-m1;
    segundo_total=s2-s1;

    if(segundo_total<0){
        segundo_total+=60;
        minuto_total--;
    }
    if(minuto_total<0){
        minuto_total+=60;
        hora_total--;
    }
    if(hora_total<0){
        hora_total+=24;
        dia_total--;
    }

    cout<<dia_total<<" dia(s)"<<endl;
    cout<<hora_total<<" hora(s)"<<endl;
    cout<<minuto_total<<" minuto(s)"<<endl;
    cout<<segundo_total<<" segundo(s)"<<endl;


    return 0;
}