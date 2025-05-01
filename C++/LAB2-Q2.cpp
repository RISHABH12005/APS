//WAP to find out series sum of 1^2 + 2^2 + …. + n^2.
#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter the value of n ";
cin>>n;
int A=0;
for(int i=0;i<=n;i++){
    A+=i*i;}
    cout<<"Sum of the series is "<<A;
}
