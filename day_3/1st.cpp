#include<iostream>
using namespace std;

int main(){
   /*
    std:: cout<< "hello World"<<endl; 
    */


   /*
   int a;
   cout<< "Enter the 1st Number"<<endl;
   cin>>a;
   
   if(a>0){
    cout<< "a is +ve." <<endl;
   }

   else if(a<0){
    cout<< "a is -ve." <<endl;
   }

   else{
    cout<< "a is 00" <<endl;
   }
    */

   char a;

    cout<< "Enter anything"<<endl;
    cin>>a;

   if(a>=65 && a<=90){
    cout<< "a is Upper Case.";
   }

   else if(a>=97 && a<=122){
    cout<< "a is Lower Case.";
   }

   else {
    cout<< "The number has been entered";
   }
}