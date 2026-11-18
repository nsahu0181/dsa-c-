#include <iostream>
using namespace std;
int sumN(int num){
int sum=0;
for(int i=1;i<=num;i++){
    sum=sum+i;
}
return sum;
}
int fact(int num){
int f=1;
for (int i =1;i<=num;i++){
    f=f*i;
}
return f;
}
int sum(int a,int b){
    int c=a+b;
    return c;
}

int main(){
int num=1455;
int sum=0;
while(num>0){
    sum=sum+num%10;
    num=num/10;
}
cout<<sum;   
}
