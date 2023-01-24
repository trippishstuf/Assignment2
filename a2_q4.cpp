#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;

    //write your code here
    for(int i=1;i<=n;i++){
        for(int j=1;j<i;j++){
            cout<<"  ";
        }
        for(int k=i;k<=n;k++){
            cout<<" *";
        }
        cout<<endl;
    }
    return 0;

}
