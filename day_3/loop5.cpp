/* Sum of n Prime Number. */

#include<iostream>
using namespace std;

int main(){
    int n;
    int i=2, j;
    int sum=0;

    cin>>n;

    for(i=2;i<=n;i++){
        int count =0;
        for(j=2;j<i;j++){
            if(i%j==0){
               count ++;
            }
        }

        if(count==0){
            sum=sum+i;
        }
    }

    cout<<sum<<endl;
}