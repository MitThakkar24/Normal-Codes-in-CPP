#include<iostream>
using namespace std;
int main(){
    int n,i;
    bool flag=1;
    cout<<"Enter Number To Check Prime=";
    cin>>n;
    for(i=2;i<n;i++){
        if(n%i==0){
            cout<<n<<" Is Not Prime";
            flag=0; 
            break;
        } 
    }
    if(flag==1){
        cout<<n<<" Is Prime Number";
    }
}