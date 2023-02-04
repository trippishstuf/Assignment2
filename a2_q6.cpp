#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int n;
    cin >> n;
    int nspace=1;
    int nstar=(n+2)/2;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nstar;j++){
            cout<<" * ";
        }
        for(int k=1;k<=nspace;k++){
            cout<<"   ";
        }
        for(int l=nstar;l>0;l--){
            cout<<" * ";
        }
        cout<<endl;
        if(i<=n/2){
            nstar-=1;
            nspace+=2;
        }
        else{
            nstar+=1;
            nspace-=2;
        }
    }
    return 0;
}
