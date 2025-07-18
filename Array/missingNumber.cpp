#include<bits/stdc++.h>
using namespace std;

int missingNumber(int nums[], int n){
    int xor1=0;
    int xor2=0;
    for(int i=0; i<n; i++){
        xor2=xor2^nums[i];
        xor1=xor1^i;
    }
    xor1=xor1^n; // Include n in the XOR operation
    return (xor1^xor2);
}
int main(){
    vector<int> nums = {0, 1, 2, 3, 5}; // Example input
    int missing = missingNumber(nums.data(), nums.size());
    cout << "The missing number is: " << missing << endl;
    return 0;
}