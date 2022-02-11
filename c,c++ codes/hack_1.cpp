#include<iostream>
#include<math.h>
using namespace std;
int f(int k){
    int org=k,num=0;
    while(k%10!=0||k/10!=0){
        cout<<num<<k%10<<endl;
        num=num*10+(k%10);
        k=k/10;
    }
    return abs(org-num);
}
int main(){
    printf("%d",f(20));
}