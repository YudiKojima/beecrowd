#include <iostream>

using namespace std;

int main(){

    int n,x;
    cin>>n;

    if(n<10000){
        for(int i=0;i<n;i++){
            cin>>x;
            if(x>0 && x%2==0){
                cout<<"EVEN POSITIVE"<<endl;
            }
            else if(x<0 && x%2==0){
                cout<<"EVEN NEGATIVE"<<endl;
            }
            else if(x>0 && x%2!=0){
                cout<<"ODD POSITIVE"<<endl;
            }
            else if(x<0 && x%2!=0){
                cout<<"ODD NEGATIVE"<<endl;
            }
            else if(x==0){
                cout<<"NULL"<<endl;
            }
        }
    }

    return 0;
}