#include<bits/stdc++.h>
using namespace std;

int leftRotateOne(int arr[], int n){
    int temp=arr[0];
    for(int i=1; i<n; i++){
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
    return 0;
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    leftRotateOne(arr,n);
    cout<<"Array after left rotation by one is: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}