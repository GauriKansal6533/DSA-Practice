#include<bits/stdc++.h>
using namespace std;
int removeDuplicates( int arr[],int n){
    int i=0;
    for(int j=1; j<n; j++){
        if(arr[i]!=arr[j]){
            i++;
            arr[i]=arr[j];
        }
    }
    return i+1;
}
int main(){
    int arr[]={1,1,2,2,2,3,3,4,5,5};
    int n= sizeof(arr)/sizeof(arr[0]);
    int k= removeDuplicates(arr, n);
    cout<<"the array after removing the duplicates is: "<<endl;
    for(int i=0; i<k; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}