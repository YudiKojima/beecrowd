#include <iostream>
#include <string>

using namespace std;

int main(){

    int t;
    string op1, op2;
    string tesoura("tesoura"), papel("papel"), pedra("pedra"), lagarto("lagarto"), spock("Spock");

    cin>>t;

    if(t<=100){
        for(int i=1; i<=t; i++){
            cin>>op1>>op2;
            if(op1 == tesoura){
                if(op2 == papel){
                    cout<<"Caso #"<<i<<": Bazinga!"<<endl;
                }
                else if(op2 == pedra){
                    cout<<"Caso #"<<i<<": Raj trapaceou!"<<endl;
                }
                else if(op2 == tesoura){
                    cout<<"Caso #"<<i<<": De novo!"<<endl;
                }
                else if(op2 == lagarto){
                    cout<<"Caso #"<<i<<": Bazinga!"<<endl;
                }
                else if(op2 == spock){
                    cout<<"Caso #"<<i<<": Raj trapaceou!"<<endl;
                }
            }
            else if(op1 == papel){
                if(op2 == papel){
                    cout<<"Caso #"<<i<<": De novo!"<<endl;
                }
                else if(op2 == pedra){
                    cout<<"Caso #"<<i<<": Bazinga!"<<endl;
                }
                else if(op2 == tesoura){
                    cout<<"Caso #"<<i<<": Raj trapaceou!"<<endl;
                }
                else if(op2 == lagarto){
                    cout<<"Caso #"<<i<<": Raj trapaceou!"<<endl;
                }
                else if(op2 == spock){
                    cout<<"Caso #"<<i<<": Bazinga!"<<endl;
                }
            }
            else if(op1 == pedra){
                if(op2 == papel){
                    cout<<"Caso #"<<i<<": Raj trapaceou!"<<endl;
                }
                else if(op2 == pedra){
                    cout<<"Caso #"<<i<<": De novo!"<<endl;
                }
                else if(op2 == tesoura){
                    cout<<"Caso #"<<i<<": Bazinga!"<<endl;
                }
                else if(op2 == lagarto){
                    cout<<"Caso #"<<i<<": Bazinga!"<<endl;
                }
                else if(op2 == spock){
                    cout<<"Caso #"<<i<<": Raj trapaceou!"<<endl;
                }
            }
            else if(op1 == lagarto){
                if(op2 == papel){
                    cout<<"Caso #"<<i<<": Bazinga!"<<endl;
                }
                else if(op2 == pedra){
                    cout<<"Caso #"<<i<<": Raj trapaceou!"<<endl;
                }
                else if(op2 == tesoura){
                    cout<<"Caso #"<<i<<": Raj trapaceou!"<<endl;
                }
                else if(op2 == lagarto){
                    cout<<"Caso #"<<i<<": De novo!"<<endl;
                }
                else if(op2 == spock){
                    cout<<"Caso #"<<i<<": Bazinga!"<<endl;
                }
            }
            else if(op1 == spock){
                if(op2 == papel){
                    cout<<"Caso #"<<i<<": Raj trapaceou!"<<endl;
                }
                else if(op2 == pedra){
                    cout<<"Caso #"<<i<<": Bazinga!"<<endl;
                }
                else if(op2 == tesoura){
                    cout<<"Caso #"<<i<<": Bazinga!"<<endl;
                }
                else if(op2 == lagarto){
                    cout<<"Caso #"<<i<<": Raj trapaceou!"<<endl;
                }
                else if(op2 == spock){
                    cout<<"Caso #"<<i<<": De novo!"<<endl;
                }
            }
        }
    }
    return 0;
}
