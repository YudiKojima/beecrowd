#include <iostream>

using namespace std;

int main(){

    int n=1,j=60;

    for(int i=0;i<=12;i++){
        cout<<"I="<<n<<" J="<<j<<endl;
        n+=3;
        j-=5;
    }

    return 0;
}