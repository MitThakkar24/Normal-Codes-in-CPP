#include<iostream>
using namespace std;
int main(){
    int n=1111 ;
    int num=0;
    int base=1;
    int temp=n;
    while(temp){
        int digit=temp%10;
        temp=temp/10;
        num = num + digit * base;
        base=base*2;
    }
    cout<<num;
}