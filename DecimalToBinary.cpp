#include<iostream>
using namespace std;
int main(){
    int i=0,n=8;
    int numb[32];
    while(n>0){
        int mod= n%2;
        numb[i]=mod;
        n=n/2;
        i++;
    }
    for(int j=i-1;j>=0;j--){
        cout<<numb[j];
    }
}