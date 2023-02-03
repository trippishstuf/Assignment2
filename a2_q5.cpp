#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int n;
    cin >> n;
    int nstar=1;
    int nspace=n/2;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nspace;j++){
            cout<<"   ";
        }
        for(int k=1;k<=nstar;k++){
            cout<<" * ";
        }
        cout<<endl;
        if(i<=n/2){
            nspace-=1;
            nstar+=2;
        }
        else{
            nspace+=1;
            nstar-=2;
        }
    }
    return 0;
}
