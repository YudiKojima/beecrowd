#include <iostream>

using namespace std;

int main(){

    int n=1,j=7;

    for(int i=0;i<12;i++){
        cout<<"I="<<n<<" J="<<j<<endl;
        j-=1;
        if(j<=4){
            j+=3;
            if(n<=1){
                n-=1;
                n+=3;
            } else{
                n+=3;
            }
        }
    }

    return 0;
}