#include<bits/stdc++.h>
using namespace std;

int secondLargestElement(int arr[], int n){
    int Largest= INT_MIN;
    int secondLargest = INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i]> Largest){
            secondLargest= Largest;
            Largest = arr[i];
        }
        else if(arr[i]>secondLargest && arr[i] != Largest){
            secondLargest = arr[i];
        }
    }
    return secondLargest;
}
int secondSmallestElement(int arr[], int n){
    int Smallest= INT_MAX;
    int secondSmallest= INT_MAX;
    for(int i=0; i<n; i++){
        if(arr[i]<Smallest){
            secondSmallest= Smallest;
            Smallest= arr[i];
        }
        else if(arr[i]<secondSmallest && arr[i]!= Smallest){
            secondSmallest=arr[i];
        }
    }
    return secondSmallest;
}
int main(){
    int arr[]={3, 2, 1, 0, 8};
    int n= sizeof(arr)/sizeof(arr[0]);
    cout<<"The second largest element in the given array is: "<<secondLargestElement(arr, n) << endl;
    cout<<"The second smallest element in the given array is: "<<secondSmallestElement(arr, n) << endl;
    return 0;
}