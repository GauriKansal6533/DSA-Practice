#include<bits/stdc++.h>
using namespace std;

void reverse( int arr[], int start, int end){
    while (start<=end){
        int temp= arr[start];
        arr[start]=arr[end];
        arr[end]= temp;
        start++;
        end--;
    }
}
void rotateLeftDplaces(int arr[], int n, int d){
    reverse (arr,0,d-1);
    reverse( arr, d, n-1);
    reverse(arr,0,n-1);
}
void rotateRightDplaces(int arr[], int n, int d){
    reverse(arr, 0, n-d-1);
    reverse(arr, n-d, n-1);
    reverse(arr, 0, n-1);
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int d=2; // Number of places to rotate
    rotateLeftDplaces(arr,n,d);
    cout<<"Array after left rotation by "<<d<<" places is: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    rotateRightDplaces(arr,n,d);
    cout<<"Array after right rotation by "<<d<<" places is: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}