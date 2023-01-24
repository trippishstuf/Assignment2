#include <iostream>
using namespace std;
int main(int argc, char**argv){
    int n;
    cin >> n;

    //write your code here
    for(int i=1;i<=n;i++){
        int m=0;
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        for(int j=i+1;j<(2*n)-i;j++){
            cout<<"  ";
        }
        if(i==n){
            m=i-1;
        }
        else{
            m=i;
        }
        for(int k=m;k>0;k--){
            cout<<k<<" ";
        }
        cout<<endl;
    }
    return 0;
}
