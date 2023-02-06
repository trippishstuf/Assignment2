#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
    int n;
    cin >> n;

    // write your code here
    int t1 = 0;
    int t2 = 1;
    int t3;
    for (int i = 1; i <= n; i++)
    {
        for(int j=1;j<=i;j++){
            if(i==1){
                cout<<t1<<" ";
                t1++;
            }
            else if(i==2){
                cout<<t1<<" ";
            }
            else{
                t3 = t1 + t2;
                cout << t3 <<" ";
                t1 = t2;
                t2 = t3;
            }
        }
        cout<<endl;
    }
    return 0;
}
