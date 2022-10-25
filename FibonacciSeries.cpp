#include<iostream> 
using namespace std;
int main(){
    int i,n=10,temp;    
    int crr=1, pre=0;
    cout<<pre<<" "<<crr<<" ";
    for(i=1;i<n;i++){
        temp=crr;
        crr=crr+pre;
        cout<<crr<<" ";
        pre=temp;
    }
}