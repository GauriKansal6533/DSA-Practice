#include<bits/stdc++.h>
using namespace std;

int maximumConsecutiveOnes(int arr[], int n){
    int count=0;
    int maxi=0;
    for(int i=0; i<n; i++){
        if(arr[i]==1){
            count++;
            maxi=max(maxi,count);
        }
        else{
            count=0;
        }
    }
    return maxi;
}
int main(){
    int arr[] = {1, 1, 0, 1, 1, 1}; // Example input
    int n = sizeof(arr)/sizeof(arr[0]);
    int maxOnes = maximumConsecutiveOnes(arr, n);
    cout << "Maximum consecutive ones: " << maxOnes << endl;
    return 0;
}