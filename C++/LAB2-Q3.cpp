//WAP to find out GCD of two numbers.
#include<iostream>
using namespace std;
int ans(int a,int b){
if(b==0){
    return 0;}
    else{
       return ans(b,a%b);}
}
int main(){
    int a,b;
    cout<<"Enter the No.";
    cin>>a;
    cout<<"Enrte the No.";
    cin>>b;
    int ans=(a,b);
    cout<<"GDC of the "<<a<<" & "<<b<<" is "<<ans;
}
