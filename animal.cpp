#include <iostream>
#include <string>

using namespace std;

int main(){

    string reino,reino1("vertebrado"),reino2("invertebrado");
    string classe,classe1("ave"),classe2("mamifero"),classe3("inseto"),classe4("anelideo");
    string tipo,tipo1("carnivoro"),tipo2("onivoro"),tipo3("onivoro"),tipo4("herbivoro"),tipo5("hematofago"),
    tipo6("herbivoro"),tipo7("hematofago"),tipo8("onivoro");
    string anim1("aguia"),anim2("pomba"),anim3("homem"),anim4("vaca"),anim5("pulga"),anim6("lagarta"),
    anim7("sanguessuga"),anim8("minhoca");

    cin>>reino;

    if(reino==reino1){
        cin>>classe;
        if(classe==classe1){
            cin>>tipo;
            if(tipo==tipo1){
                cout<<anim1<<endl;
            }
            else if(tipo==tipo2){
                cout<<anim2<<endl;
            }
        }

        else if(classe==classe2){
            cin>>tipo;
            if(tipo==tipo3){
                cout<<anim3<<endl;
            }
            else if(tipo==tipo4){
                cout<<anim4<<endl;
            }
        }
    }
    else if (reino==reino2){
        cin>>classe;
        if(classe==classe3){
            cin>>tipo;
            if(tipo==tipo5){
                cout<<anim5<<endl;
            }
            else if(tipo==tipo6){
                cout<<anim6<<endl;
            }
        }

        else if(classe==classe4){
            cin>>tipo;
            if(tipo==tipo7){
                cout<<anim7<<endl;
            }
            else if(tipo==tipo8){
                cout<<anim8<<endl;
            }
        }

    }
    

    return 0;
}