#include <iostream>
using namespace std;
int main(){
    int i,j,k,n;
    cout<<"Enter a number: ";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for(j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
