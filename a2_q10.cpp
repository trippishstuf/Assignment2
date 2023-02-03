#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    int nspace=n/2;
    int nstar=1;
    //write your code here
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nspace;j++){
            cout<<"   ";
        }
        for(int k=1;k<=nstar;k++){
            if(k==1 || k==nstar){
                cout<<"*";
            }
            cout<<"   ";
        }
        if(i<=n/2){
            nspace-=1;
            nstar+=2;
        }
        else{
            nspace+=1;
            nstar-=2;
        }
        cout<<endl;
    }
    return 0;
    
}
