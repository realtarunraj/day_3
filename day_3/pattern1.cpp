    // 111
    // 222
    // 333

#include<iostream>
using namespace std;

int main(){
    int n, i=1, j=1;
    cin>>n;

    while(i<=n){
        j=1;
        while(j<=n){
            cout<<i;
            j=j+1;
        }
        i++;
        cout<<endl;
    }
}