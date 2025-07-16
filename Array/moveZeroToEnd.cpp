#include<bits/stdc++.h>
using namespace std;

int moveZeroToEnd(int arr[], int n){
    int j=-1;
    for(int i=0; i<n; i++){
        if(arr[i]==0){
            j=i;
            
            break;
        }
    }
    if(j==-1) return 0; // No zero found
    for(int i=j+1; i<n; i++){
        if(arr[i]!=0){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            j++;
        }
    }
}
int main(){
    int arr[]={0,1,0,3,12};
    int n=sizeof(arr)/sizeof(arr[0]);
    moveZeroToEnd(arr,n);
    cout<<"Array after moving zeros to the end is: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}