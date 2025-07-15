#include<bits/stdc++.h>
using namespace std;

int largestElement(int arr[], int n) {
    int largest=0;
    for(int i=0; i<n; i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    return largest;
}
int main() {
    int arr[] = {3,2,1,0,8};
    int n= sizeof(arr)/sizeof(arr[0]);
    cout<<"the largest element in the given array is:"<<largestElement(arr, n)<<endl;
    return 0;

}