#include<bits/stdc++.h>
using namespace std;

int numberAppear(int arr[], int n){
    int xorr=0;
    for(int i=0; i<n; i++){
        xorr=xorr^arr[i];
    }
    return xorr;
}
int main(){
    int arr[] = {4, 1, 2, 1, 2}; // Example input
    int n = sizeof(arr)/sizeof(arr[0]);
    int result = numberAppear(arr, n);
    cout << "The number that appears only once is: " << result << endl;
    return 0;
}