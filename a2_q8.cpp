#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int n;
    cin >> n;

    //write your code here
    for(int i=n;i>0;i--){
        for(int j=1;j<=i;j++){
            if(j==i){
                cout<<" *";
                break;
            }
            cout<<"  ";

        }
        cout<<endl;
    }
    
}
