/* Celcius to Faranhite Conversion */

#include<iostream>
using namespace std;

int main(){
    int c, f;
    cout<<"Enter the temp in celcius"<<endl;
    cin>>c;
    
    f= (c*9/5)+32;
    cout<< "The temp in faranhite is "<< f <<endl;
}