#include<bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int n, int target){
    for(int i=0; i<n; i++){
        if(arr[i]==target){
            return i; // Return the index of the target element
        }
    }
    return -1; // Target not found
}
int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 3; // Element to search for

    int result = linearSearch(arr, n, target);
    if(result != -1){
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }
    
    return 0;
}