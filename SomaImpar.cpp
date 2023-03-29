#include <iostream>

using namespace std;

int main(){

    int n,x,y,max,min,soma=0;
    cin>>n;

    for(int r=0;r<n;r++){
        cin>>x>>y;
        if(x<y){
            max=y;
            min=x;
        } else{
            max=x;
            min=y;
        }

    for(int i = (min+1);i<max;i++){
        if(i % 2 != 0){
            soma += i;
        }
    }

    cout<<soma<<endl;
    soma=0;
    }

    return 0;
}