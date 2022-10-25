#include<iostream>
using namespace std;
int countElements(int * arr,int n){
    int count = 0;
    
    for(int i=0;i<n;i++){
        int x=arr[i];
        int xPlusOne= x+1;
        bool found = false;

        for(int j=i+1;j<n;j++){
            if(arr[j]==xPlusOne){
                found== true;
                break;
            }
        }
        for(int k=i-1; !found && k>=0; k--){
            if(arr[k]==xPlusOne){
                found=true;
                break;
            }
        if(found == true){
            count++;
        }
        return count;
        }
    }
    
    
}
using namespace std;
int main(){
    int arr[32];
    for(int i=0;i<32;i++){
        cin>>arr[i];

    }
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<countElements(arr,n);
    return 0;
}