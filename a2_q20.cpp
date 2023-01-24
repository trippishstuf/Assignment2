#include <iostream>
using namespace std;
int main(int argc, char**argv){
    int n;
    cin >> n;

    //write your code here
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j==1 || j==n){
                cout<<"* ";
                continue;
            }
            else if(i>=((n+1)/2)){
                if(j==i){
                    cout<<"* ";
                    continue;
                }
                else if((i+j)==(n+1)){
                    cout<<"* ";
                    continue;
                }
                cout<<"  ";
                continue;
            }
            cout<<"  ";         
        }
        cout<<endl;
    }
    return 0;
}
