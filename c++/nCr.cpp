#include <iostream>
using namespace std;
int factorial(int num){
    int fact=1;
    for(int i=1;i<=num;i++){
        fact=fact*i;
    }
    return fact;
}
int nCr(int n,int r){
    int ncr=(factorial(n))/((factorial(r))*(factorial(n-r)));
    return ncr;
}
int main(){
    int n,r;
    cout<<"enter value of n=";
    cin>>n;
    cout<<"enter value of r=";
    cin>>r;
    cout<<nCr(n,r);

}