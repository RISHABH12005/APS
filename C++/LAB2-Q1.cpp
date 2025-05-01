//WAP to generate a Fibonacci series up to n terms. Input number of terms: 10 Output Fibonacci series: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34.
#include<iostream>
using namespace std;
int F(int n){
if(n<=1){
    return n;}
    else{
        return F(n-1)+F(n-2);}
}
int main (){
int n;
cout<<"Enter the No.";
cin>>n;
cout<<"Fibonacci Series";
for(int i=0;i<n;i++){
    cout<<F(i)<<" ";}
return 0;
}
