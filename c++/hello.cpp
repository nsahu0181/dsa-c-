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
int main(){
    cout<<sumN(10)<<endl;
     cout<<fact(5);
}
